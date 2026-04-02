class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        // agar mujhe k sum chaiye to hum prefix sum maintain karenge aur current sum - k 
        //karenge aur map me dekhenge ke pehle maine kabhi minus kiya hua result dekha hai
        //dekha hoga to matlab prefix sum raha hai nhi to map me daal denge
        
        int n=arr.size();
        unordered_map<int,int>mp;
        int currSum=0;
        int result=0;
        mp.insert({0,1});
        
        // mp[0]=1;
        
        for(int i=0;i<n;i++){
            currSum+=arr[i];
            if(mp.find(currSum-k)!=mp.end()){
                result+=mp[currSum-k];
            }
            
            mp[currSum]++;
        }
        return result;
    }
};