class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        int countTotalSetBit = 0;
        //long long int MAX = 1e9 + 7;
        for (int i = 1; i <= n; i <<= 1) {
            int quotient = (n + 1) / (i << 1);
            int remdr = (n + 1) % (i << 1);
            countTotalSetBit += quotient * i + max(0, remdr - i);
        }
    
        return countTotalSetBit;
    }
};
