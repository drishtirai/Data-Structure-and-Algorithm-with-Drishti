class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
       int sum1=0;
        for(int i=0;i<n-1;i++){
            sum1+=array[i]; 
           
        }
        int sum2 =n*(n+1)/2 ;
        return sum2-sum1;
    
    }
};
