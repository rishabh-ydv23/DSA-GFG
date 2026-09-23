class Solution {
    public ArrayList<Integer> primeFactors(int n) {
        ArrayList<Integer> ans = new ArrayList<>();

        for (int i = 2; i * i <= n; i++) {

            while (n % i == 0) {
                ans.add(i);
                n = n / i;
            }
        }

        if (n > 1) {
            ans.add(n);
        }

        return ans;
    }
}