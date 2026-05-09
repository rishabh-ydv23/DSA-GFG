/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
  
  
    int kthLargest(Node *root, int k) {
        // Your code here
        int count=0;
        stack<Node*>st;
        while(root!=NULL || !st.empty()){
            while(root!=NULL){
                st.push(root);
                root=root->right;
            }
            root=st.top();
            st.pop();
            count++;
            if(count==k){
                return root->data;
            }
            root=root->left;
        }
        return -1;
    }
};