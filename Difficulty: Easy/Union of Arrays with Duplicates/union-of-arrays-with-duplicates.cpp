class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int>s;
        s.insert(a.begin(),a.end());
        s.insert(b.begin(),b.end());
        vector<int>res(s.begin(),s.end());
        return res;
    }
};