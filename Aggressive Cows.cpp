class Solution {
public:
    bool isOk(int n, int k, vector<int> &stalls,int mid){
        int cnt=1,last=stalls[0];
        for(int i=1;i<n;i++){
            if(stalls[i]-last>=mid){
                cnt++;
                if(cnt==k)return 1;
                last=stalls[i];
            }
        }
        return 0;
    }  

    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int low=0;
        int high=stalls[n-1];
        int ans=1;
        while(low<=high){
            int mid=(high+low)/2;
            if(isOk(n,k,stalls,mid)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    
        
    }
};
