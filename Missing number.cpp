
int missingNumber(int A[], int N)
{
    // Your code goes here
    int hash[N + 1] = {0}; //hash array

    // storing the frequencies:
    for (int i = 0; i < N - 1; i++)
        hash[A[i]]++;

    //checking the freqencies for numbers 1 to N:
    for (int i = 1; i <= N; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }

    // The following line will never execute.
    // It is just to avoid warnings.
    return -1;
}
