class Solution {
    public void rotateArr(int nums[], int k) {
        // code here
        int n=nums.length;
        int[] arr=nums.clone();
        
        for(int i=0;i<n;i++){
            nums[i]=arr[(i+k)%n];
        }
    }
}