class Solution {
    public int romanToInteger(String s) {
        // code here
        int n=s.length();
        HashMap<Character,Integer>mp=new HashMap<>();

        mp.put('I',1);
        mp.put('V',5);
        mp.put('X',10);
        mp.put('L',50);
        mp.put('C',100);
        mp.put('D',500);
        mp.put('M',1000);

        int ans=0;

        for(int i=0;i<s.length();i++){
            int curr=mp.get(s.charAt(i));
            if(i+1 < n && curr < mp.get(s.charAt(i+1))){
                ans-=curr;
            }else{
                ans+=curr;
            }
        }
        return ans;
    }
}