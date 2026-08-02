class Solution {
  public:
    vector<vector<int>> getSubArrays(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            vector<int>ans2;
            for(int j=i;j<n;j++){
                ans2.push_back(arr[j]);
                ans.push_back(ans2);
            }
        }
        return ans;
    }
};