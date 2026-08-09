class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {

    //Write your code here
        int n=arr.size();
        vector<int>result(n);
        result[0]=1;
        
        for(int i=1;i<n;i++){
            result[i]=result[i-1]*arr[i-1];
        }
    
        int rightPr=1;
    
        for(int i=n-1;i>=0;i--){
            result[i]=result[i]*rightPr;
            rightPr*=arr[i];
        }
        
        return result;

        
    }
};
