class Solution {
    ArrayList<Integer> findTwoElement(int arr[]) {
        
        HashSet<Integer>st=new HashSet<>();
        int n=arr.length;
        int repeating=0;
        int missing=0;
        
        for(int i=0;i<n;i++){
            if(st.contains(arr[i])){
                repeating=arr[i];
            }else{
                st.add(arr[i]);
            }
        }
        
        for(int i=1;i<=n;i++){
            if(!st.contains(i)){
                missing=i;
            }
        }
        
        ArrayList<Integer>li=new ArrayList<>();
        li.add(repeating);
        li.add(missing);
        return li;
    }
}
