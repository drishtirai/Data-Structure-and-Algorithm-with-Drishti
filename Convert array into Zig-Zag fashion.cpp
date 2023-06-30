class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        // code here
        sort(arr,arr+n);
           for(int i=1, j=2; i<n && j<n ; i+=2, j+=2){
            swap(arr[i],arr[j]);
        }
    }
};
