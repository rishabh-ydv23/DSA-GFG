class Solution {
  public:
    void insertAtB(stack<int>& st, int x) {
        if (st.empty()) {
            st.push(x);
            return;
        }

        int top = st.top();
        st.pop();
        insertAtB(st, x);
        st.push(top);
    }

    stack<int> insertAtBottom(stack<int> st, int x) {
        insertAtB(st, x);
        return st;
    }
};
