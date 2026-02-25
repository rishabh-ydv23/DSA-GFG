class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        int n = arr.size();
        unordered_map<int,int> mp;   // prefixSum -> first index
        int prefixSum = 0;
        int maxLen = 0;
        
        for(int i = 0; i < n; i++) {
            
            // Convert to +1 / -1
            if(arr[i] > k)
                prefixSum += 1;
            else
                prefixSum -= 1;
            
            // If prefixSum > 0 → whole subarray valid
            if(prefixSum > 0) {
                maxLen = i + 1;
            }
            else {
                // Check if (prefixSum - 1) appeared before
                if(mp.find(prefixSum - 1) != mp.end()) {
                    maxLen = max(maxLen, i - mp[prefixSum - 1]);
                }
            }
            
            // Store first occurrence only
            if(mp.find(prefixSum) == mp.end()) {
                mp[prefixSum] = i;
            }
        }
        
        return maxLen;

    }
};