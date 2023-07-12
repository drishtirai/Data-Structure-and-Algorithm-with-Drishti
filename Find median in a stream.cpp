class Solution
{
    public:
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,greater<int>>minheap;
    //Function to insert heap.
    void insertHeap(int &x)
    {
          if(maxheap.empty() and minheap.empty()){
             maxheap.push(x);
         }
         else {
             if(maxheap.size()>minheap.size()){
                 if(maxheap.top()>x){
                     minheap.push(maxheap.top());
                     maxheap.pop();
                     maxheap.push(x);
                 }
                 else {
                     minheap.push(x);
                 }
             }
             else 
             if(x<=maxheap.top()){
                 maxheap.push(x);
             }
             else {
                 minheap.push(x);
                 maxheap.push(minheap.top());
                 minheap.pop();
             }
         }
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    //Function to return Median.
    double getMedian()
    {
         if(maxheap.size()==minheap.size()) {
            return ((maxheap.top()+minheap.top())/2.0);
        }
        return maxheap.top();
    }
};
