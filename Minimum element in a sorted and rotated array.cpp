class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int start=0;
        int end=n-1;
        int minVal=INT_MAX;
       while(start < end){
            int mid = start + (end - start)/2;
            // checking weither the array is rotated or not
            if(arr[mid] > arr[start] && arr[mid] > arr[end]){
                start = mid+1;
            }
            // checking wither the mid is start point or not of rotated right part of array
            else if(arr[mid] < arr[start] && arr[mid] < arr[end]){
                end = mid;
            }
            // checking weither the array is in decreasing order or not
            else if(arr[mid] > arr[end]){
                start = mid+1;
            }
            // it's means whole array is in increasing order
            else{
                end = mid-1;
            }
        }
        return arr[start];
    
    }
};

