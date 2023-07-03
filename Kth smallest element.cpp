priority_queue<int,vector<int>,greater<int>> pq;
        while(l<=r)
        {
            pq.push(arr[l]);
            l++;
        }
        int i = 1;
        
        while(i<k) {
            pq.pop();
            i++;
        }
        return pq.top();
