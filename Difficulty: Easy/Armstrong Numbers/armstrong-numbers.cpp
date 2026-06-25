class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int org=n;
        int sum=0;
        while(n>0){
            int digit=n%10;
            n/=10;
            sum+=pow(digit,3);
        }
        
        if(sum==org)return true;
        return false;
    }
};