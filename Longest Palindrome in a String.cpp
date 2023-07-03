class Solution {
  public:
    string longestPalin (string S) {
        // code here
         int N = S.size();
        int l = -1, r = -1;
        int len = 0;
        for(int i = 0; i < N; i++) {
            // odd length
            int d = 0;     // d -> distance from mid
            while( i-d >= 0 && i+d < N && S[i-d] == S[i+d]) {
                int nlen = 2*d + 1;
                if(nlen > len) {
                    len = nlen;
                    l = i - d;
                    r = i + d;
                }
                d++;
            } 
            // even length
            d = 0;
            while( i-d+1 >= 0 && i+d < N && S[i-d+1] == S[i+d]) {
                int nlen = 2*d;
                if(nlen > len) {
                    len = nlen;
                    l = i - d+1;
                    r = i + d;
                }
                d++;
            } 
        }
        return S.substr(l, len);
    }
};
