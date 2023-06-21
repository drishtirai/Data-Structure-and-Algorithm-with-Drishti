class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   k=k%n;
        reverse(arr,arr+n);
        reverse(arr,arr+n-k);
        reverse(arr+n-k,arr+n);
	} 
		 

};
