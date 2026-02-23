/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        // Create new node
        Node* newNode = new Node(x);

        // 1️⃣ Edge Case: Empty list
        if (head == nullptr) {
            return newNode;
        }

        Node* temp = head;
        int count = 0;

        // 2️⃣ Traverse to p-th node (0-based)
        while (temp != nullptr && count < p) {
            temp = temp->next;
            count++;
        }

        // 3️⃣ If p is out of range
        if (temp == nullptr) {
            return head;
        }

        // 4️⃣ Insert AFTER p-th node
        
        // Link newNode
        newNode->next = temp->next;  // safe pointer assignment
        newNode->prev = temp;

        // If not inserting at end
        if (temp->next != nullptr) {
            temp->next->prev = newNode;  // dereferencing → need NULL check
        }

        temp->next = newNode;

        return head;
    }
};