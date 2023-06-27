class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        
        //code here
        sort(A.begin() , A.end());
        sort(B.begin() , B.end());
        A.push_back(N);
        B.push_back(N);
        
        if(A == B)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
