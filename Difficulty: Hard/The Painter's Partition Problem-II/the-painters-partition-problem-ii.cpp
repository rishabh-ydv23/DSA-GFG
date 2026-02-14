class Solution {
  public:
    int countPainter(vector<int>arr,int maxLen){
        int painter=1;
        long long currLen=0;
        
        for(int i=0;i<arr.size();i++){
            if(currLen+arr[i]<=maxLen){
                currLen+=arr[i];
            }else{
                painter++;
                currLen=arr[i];
            }
        }
        return painter;
    }
    
    int minTime(vector<int>& arr, int k) {
        int n=arr.size();
        if(k>n)return -1;

        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            int reqPainter=countPainter(arr,mid);
            if(reqPainter>k){
                low=mid+1;
            }else{
                ans=mid;
                high=mid-1;
            }
        }        
        return ans;
    }
};