/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int kthSmallest(Node *root, int k) {
        // code here
        stack<Node*>st;
        while(root!=NULL || !st.empty()){
            while(root!=NULL){
                st.push(root);
                root=root->left;
            }
            root=st.top();
            st.pop();
            k--;
            if(k==0){
                return root->data;
            }
            root=root->right;
        }
        return -1;
    }
};