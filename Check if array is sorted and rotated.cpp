class Solution{
    public:
    bool checkRotatedAndSorted(int arr[], int num){
        
        // Your code here
         int c=0;
           int k=0;
           int maxx=INT_MIN;
           int minn=INT_MAX;
           for(int i=1;i<=num;i++)
           {
              if(arr[i%num]<arr[(i-1)%num])
              {
                  c++;
              }
              else 
              {
                  k++;
              }
              maxx=max(arr[i],maxx);
              minn=min(arr[i],minn);
           }
           if(minn==arr[0])
           {
               return false;
           }
           if(maxx==arr[num-1])
           {
               return false;
           }
           if(c==1||k==1)
           {
               return true;
           }
        return false;
        
    }
};
