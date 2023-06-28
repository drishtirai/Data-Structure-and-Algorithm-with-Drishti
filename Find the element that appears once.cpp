class Solution{
public:	
	int search(int A[], int N){
	    //code
	  for(int i=0;i<N;i+=2){
            if(A[i+1]!=A[i])    return A[i];
        }
        return -1;
	}
};
