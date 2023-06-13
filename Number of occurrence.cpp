
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int start=0;
	    int end=n-1;
	    int ans=0;
	    while(start<=end){
	        int mid=start+(end-start)/2;
	        if(arr[mid]==x){
	            ans++;
	            end=mid-1;
	        }
	        else if(arr[mid]>x){
	            end=mid-1;
	        }
	        else{
	            start=mid+1;
	        }
	    }
	    return ans;
	}
};
