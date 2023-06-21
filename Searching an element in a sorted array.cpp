
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int n, int K) 
    { 
    
       // Your code here
       int i;
       for(int i=0;i<n;i++){
           if(arr[i]==K)
           return 1;
       }
       return -1;
    }
};
