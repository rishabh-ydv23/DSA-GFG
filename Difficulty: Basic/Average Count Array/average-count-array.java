class Solution {
    public int[] countArray(int[] arr, int x) {
        // code here
        int n=arr.length;
        HashMap<Integer,Integer> mp=new HashMap<>();
        
        
        for(int i=0;i<n;i++){
            mp.put(arr[i], mp.getOrDefault(arr[i],0)+1);
        }
        
        List<Integer> res = new ArrayList<>(n);
        
        for(int i=0;i<n;i++){
            int avg=(int)Math.floor((arr[i]+x)/2);
            
            if(mp.containsKey(avg)){
                // res.set(i,mp.get(avg));
                res.add(i,mp.get(avg));
            }else{
                res.add(i,0);
            }
        }
        int[] ans = new int[n];

        for (int i = 0; i < n; i++) {
            ans[i] = res.get(i);
         }
        return ans;

    }
}
