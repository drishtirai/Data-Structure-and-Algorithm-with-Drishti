class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
        unordered_map<int, int> map;
        for(int i: A1){
            map[i]++;
        }
        sort(A1.begin(), A1.end());
        vector<int> ans;
        for(int i: A2){
            if(map[i] > 0){
                while(map[i] > 0){
                    ans.push_back(i);
                    map[i]--;
                }
            }
        }
        for(int i: A1){
            if(map[i] != 0)ans.push_back(i);
        }
        return ans;
    } 
};
