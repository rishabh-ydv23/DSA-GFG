class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int index=0;
        priority_queue<int,vector<int>,greater<int>>minHeap;
        
        for(int i=0;i<n;i++){
            minHeap.push(arr[i]);
            if(minHeap.size()>k){
                arr[index]=minHeap.top();
                index++;
                minHeap.pop();
            }
        }
        
        while(minHeap.size()>0){
            arr[index]=minHeap.top();
            index++;
            minHeap.pop();
        }
        
    }
};