class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool allocateposible(int barrier,int A[],int n,int total_students){
        int pages=0;
        int allocated_students=1;
        for(int i=0;i<n;i++){
            if(A[i]>barrier){
                return false;
            }
            if(pages +A[i]>barrier){
                allocated_students++;
                pages=A[i];
            }
            else{
                pages += A[i];
            }
        }
        if(allocated_students>total_students) return 0;
        return 1;
    }
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(N<M){
            return -1;
        }
        int tp=0;
        for(int i=0;i<N;i++){
            tp+=A[i];
        }
        int low=A[0];
        int high=tp;
        int res=-1;
        while(low<=high){
        int mid=low+(high-low)/2;
        if(allocateposible(mid,A,N,M)){
            res=mid;
            high=mid-1;
        }
        }
        return res;
        
    }
};
