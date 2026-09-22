class Solution {
    public ArrayList<ArrayList<Integer>> countFreq(int[] arr) {
        // code here
        HashMap<Integer,Integer>mp=new HashMap<>();
        
        for(int el:arr){
            mp.put(el,mp.getOrDefault(el,0)+1);
        }
        
        ArrayList<ArrayList<Integer>>list=new ArrayList<>();
        
        for(Map.Entry<Integer,Integer>entry : mp.entrySet()){
            ArrayList<Integer>pair=new ArrayList<>();
            pair.add(entry.getKey());
            pair.add(entry.getValue());
            list.add(pair);
        }
        return list;
    }
}