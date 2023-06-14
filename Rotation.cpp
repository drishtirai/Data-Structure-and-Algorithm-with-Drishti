class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int start=0;
	    int end=n-1;
	    int index=-1;
	    int minVal=INT_MAX;
	    while(start<=end){
	        int mid=start+(end-start)/2;
	        if(arr[end]<=arr[mid]){
	            if(arr[end]<minVal){
	                index=start;
	                minVal=arr[start];
	            }
	            break;
	            
	        }
	        if(arr[start]<=arr[mid]){
	            if(arr[start]<minVal){
	                index=start;
	                minVal=arr[start];
	            }
	            start=mid+1;
	        }
	        else{
	            end=mid-1;
	            if(arr[mid]<minVal){
	                index=mid;
	                minVal=arr[mid];
	            }
	            
	        }
	    }
	    return index;
	}

};
