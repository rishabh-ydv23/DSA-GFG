
class Solution {
    public boolean isSubset(int a[], int b[]) {
        // code here
        HashMap<Integer,Integer>mp=new HashMap<>();
        for(int el:a){
            mp.put(el,mp.getOrDefault(el,0)+1);
        }
        
        for(int el:b){
            if(!mp.containsKey(el) || mp.get(el)==0){
                return false;
            }
            mp.put(el,mp.get(el)-1);
        }
        return true;
    }
}
