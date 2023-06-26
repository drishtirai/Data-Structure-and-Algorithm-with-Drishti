class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        int count=0;
        int maxi=0;
        int l=0;
        int r=0;
        while(r<n){
            if(arr[r]==0){
                count++;
            }
            while (count > m) {
            if (arr[l] == 0)
              count--;l++;
        }
        maxi=max(maxi,r-l+1);
        r++;
        
    }
    return maxi;
    }
    
    
};
