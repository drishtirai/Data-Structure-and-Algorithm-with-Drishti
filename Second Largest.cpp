class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
    int max = -1;
	    int max2 = -1;
	    for(int i=0; i<n; i++){
	        if(arr[i] > max)
	        max = arr[i];
	    }
	    
	    for(int i=0; i<n; i++){
	        if(arr[i] < max && arr[i]> max2)
	        max2 = arr[i];
	    }
	    
	    return max2;

	}
};
