/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    int findMaxFork(Node* root, int k) {
        // code here
        int floor=-1;
        while(root!=NULL){
            if(root->data == k){
                floor=root->data;
                return floor;
            }else if(root->data > k){
                root=root->left;
            }else{
                floor=root->data;
                root=root->right;
            }
        }
        return floor;
    }
};