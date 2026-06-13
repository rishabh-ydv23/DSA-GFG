class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int> s;

        for (int x : a)
            s.insert(x);

        for (int x : b)
            s.insert(x);

        return vector<int>(s.begin(), s.end());
    }
};