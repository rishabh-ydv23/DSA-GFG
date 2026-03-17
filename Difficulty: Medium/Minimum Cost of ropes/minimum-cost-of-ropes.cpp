class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        int n=arr.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        
        int len=0;
        
        while(pq.size()>1){
            int x=pq.top();
            len+=x;
            pq.pop();
            int y=pq.top();
            len+=y;
            pq.pop();
            
            pq.push(x+y);
        }
        return len;
    }
};