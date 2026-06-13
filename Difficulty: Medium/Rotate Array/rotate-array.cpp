class Solution {
  public:
    void rotateArr(vector<int>& nums, int k) {
        // code here
                int n=nums.size();
            k=k%n;
        
        vector<int>num(n);
        for(int i=0;i<n;i++){
            num[i]=nums[(i+k)%n];
        }

            nums=num;
    }
};