class Solution {
    static ArrayList<Integer> removeDuplicate(int arr[]) {
        // code here
        LinkedHashSet<Integer> mp=new LinkedHashSet<>();
        for(int el:arr){
            mp.add(el);
        }
        
        ArrayList<Integer>li=new ArrayList<>(mp);
        return li;
    }
}