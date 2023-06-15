class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       int i=0;
       int j=n-1, mid;
       while(i<j){
           mid=i+(j-i)/2;
           if(arr[mid]<arr[mid+1]){
               i=mid+1;
           }
           else{
               j=mid;
           }
       }
       return i;
      
    }
};
