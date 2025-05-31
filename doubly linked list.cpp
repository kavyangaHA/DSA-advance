// C++ Program for Forward Traversal (Iterative) of
// Doubly Linked List

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

// Function to traverse the doubly linked list
// in forward direction
void forwardTraversal(Node *head) {

    // Start traversal from the head of the list
    Node *curr = head;

    // Continue until current node is not null
    // (end of list)
    while (curr != nullptr) {

        // Output data of the current node
        cout << curr->data << " ";

        // Move to the next node
        curr = curr->next;
    }

    cout << endl;
}

int main() {

    // Create a hardcoded doubly linked list:
  	// 1 <-> 2 <-> 3
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    cout << "Forward Traversal: ";
    forwardTraversal(head);

    return 0;
}