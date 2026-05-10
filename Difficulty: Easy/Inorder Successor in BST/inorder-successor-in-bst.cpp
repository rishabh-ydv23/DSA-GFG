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
    int inOrderSuccessor(Node *root, Node *k) {
        // code here
        
        Node* successor=NULL;
        
        while(root!=NULL){
            if(k->data < root->data){
                successor=root;
                root=root->left;
            }else{
                root=root->right;
            }
        }
        if(successor!=NULL){
            return successor->data;
        }
        return -1;
    }
};