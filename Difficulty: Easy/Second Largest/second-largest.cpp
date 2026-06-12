class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int lar=-1;
        int SeLr=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>lar){
                SeLr=lar;
                lar=arr[i];
            
            }else if(arr[i]<lar && arr[i]>SeLr){
                SeLr=arr[i];
            }
        }
        return SeLr;
    }
};

