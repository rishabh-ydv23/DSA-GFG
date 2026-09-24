class Solution {
    public int countSubarray(int[] arr, int k) {
        // code hereint 
        int n=arr.length;
        int i=0,j=0;
        int prod=1;
        int count=0;
        if(k<=1) return 0;
        
        while(j<n){
            prod *= arr[j];
            while(prod>=k){
                prod/=arr[i];
                i++;
            }
            count+=j-i+1;
            j++;
        }
        return count;
        
    }
}