#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a new node with data
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

Node* deleteHead(Node* head) {
  
    // Check if the list is empty
    if (head == nullptr)
        return nullptr;

    // Store the current head in a
  	// temporary variable
    Node* temp = head;

    // Move the head pointer to the next node
    head = head->next;

    // Free the memory of the old head node
    delete temp;

    return head;
}
void printList(Node* head)
{
    // Start from the head of the list
    Node* curr = head;

    // Traverse the list
    while (curr != nullptr) {
        // Print the current node's data
        cout << " " << curr->data;

        // Move to the next node
        curr = curr->next;
    }

    // Print a newline at the end
    cout << endl;
}

bool searchKey(Node* head, int key) {

    // Initialize curr with the head of linked list
    Node* curr = head;

    // Iterate over all the nodes
    while (curr != NULL) {

        // If the current node's value is equal to key,
        // return true
        if (curr->data == key)
            return true;

        // Move to the next node
        curr = curr->next;
    }

    // If there is no node with value as key, return false
    return false;
}
int countNodes(Node* head) {
  	
    // Initialize count with 0
    int count = 0;

    // Initialize curr with head of Linked List
    Node* curr = head;

    // Traverse till we reach nullptr
    while (curr != nullptr) {
        
      	// Increment count by 1
        count++;
        
      	// Move pointer to next node
        curr = curr->next;
    }
  	
  	// Return the count of nodes
    return count;
}
Node* insertAtFront(Node* head, int new_data)
{
    // Create a new node with the given data
    Node* new_node = new Node(new_data);

    // Make the next of the new node point to the current
    // head
    new_node->next = head;

    // Return the new node as the new head of the list
    return new_node;
}
Node* insertAfter(Node* head, int key, int newData) {
    Node* curr = head;

    // Iterate over Linked List to find the key
    while (curr != nullptr) {
        if (curr->data == key)
            break;
        curr = curr->next;
    }

    // if curr becomes NULL means, given key is not
    // found in linked list
    if (curr == nullptr) {
    	cout << "Node not found" << endl;  
        // Return the head of the original linked list
      	return head;
    }

    // Allocate new node and make the element to be inserted
    // as a new node
    Node* newNode = new Node(newData);

    // Set the next pointer of new node to the next pointer of given node
    newNode->next = curr->next;

  	// Change the next pointer of given node to the new node
    curr->next = newNode;
  	
  	// Return the head of the modified linked list
  	return head;
}
Node *reverseList(Node *head) {

    // Initialize three pointers: curr, prev and next
    Node *curr = head, *prev = nullptr, *next;

    // Traverse all the nodes of Linked List
    while (curr != nullptr) {

        // Store next
        next = curr->next;

        // Reverse current node's next pointer
        curr->next = prev;

        // Move pointers one position ahead
        prev = curr;
        curr = next;
    }

    // Return the head of reversed linked list
    return prev;
}

int main() {

    // Create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Given Linked list:";
    printList(head);

    head = reverseList(head);

    cout << "\nReversed Linked List:";
    printList(head);

    return 0;
}