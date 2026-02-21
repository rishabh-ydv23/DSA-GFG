/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        
        Node* newNode=new Node(key);
        if(head==NULL || key <head->data){
            newNode->next=head;
            return newNode;
        }
        
        Node* temp=head;
        while(temp->next!=NULL && temp->next->data<key){
            temp=temp->next;
        }
        
        newNode->next=temp->next;
        temp->next=newNode;
        return head;
       
    }
};