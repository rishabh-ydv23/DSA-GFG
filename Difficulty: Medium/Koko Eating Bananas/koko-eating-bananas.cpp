class Solution {
  public:
  
    bool canEat(vector<int>arr,int mid,int h){
        int actualHours=0;
        for(int &x:arr){
            actualHours+=(x/mid);    //hours
            if(x%mid!=0){
                actualHours++;
            }
        }
        return actualHours<=h;
    }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int n=arr.size();
        int l=1;
        int r=*max_element(arr.begin(),arr.end());
        
        while(l<r){
            int mid=l+(r-l)/2;
            if(canEat(arr,mid,k)){
                r=mid;
            }else{
                l=mid+1;
            }
            
        }
        return l;
    }
};