class Solution {
  public:
    bool Search(int N, vector<int>& A, int Key) {
        // Codeclass Solution{
        int l=0;
        int h=N-1;
       while(l<=h){
           int mid=l+(h-l)/2;
           if(A[mid]==Key){
               return true;
           }
           if(A[l]<=A[mid]){
               if(A[l]<=Key && Key<=A[mid]){
                   h=h-1;
               }
               else{
                   l=l+1;
               }
           }
           else{
               if(A[mid]<=Key && Key<=A[h]){
                   l=l+1;
               }
               else{
                   h=h-1;
               }
           }
       }
       return false;
 
        
    }
};
