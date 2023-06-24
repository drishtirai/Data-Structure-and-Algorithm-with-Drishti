
class Solution {
  public:
    int Solve(int N, vector<int>& piles, int H) {
        int s=1, e=1000000000; //e is h of piles[i] given in constraint

        int mid= s+(e-s)/2;

        while(s<e){

             mid = s+(e-s)/2; 

        int time=0;

        for(int p: piles) time+=(p-1)/mid+1;

        if(time<=H) e=mid;

             else s=mid+1;

        }

        return s;
    }
};
