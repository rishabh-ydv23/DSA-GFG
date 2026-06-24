class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        int n=arr.size();
        unordered_map<int,int>freq;
        for(int ele:arr){
            freq[ele]++;
        }
        
        vector<vector<int>>ans;
        for(auto ele:freq){
            ans.push_back({ele.first,ele.second});
        }
        return ans;
    }
};