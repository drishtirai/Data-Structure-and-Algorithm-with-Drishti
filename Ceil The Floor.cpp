pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
     sort(arr,arr+n);
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == x) return {arr[mid],arr[mid]};
        else if(arr[mid]<x) low = mid+1;
        else high = mid-1;
    }
    if(high == -1) return {-1,arr[low]};
    if(low == n) return {arr[high],-1};
    return {arr[high],arr[low]};
     
}
