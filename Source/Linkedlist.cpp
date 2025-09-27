#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end
void insert(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }
}

// Function to display the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Main function
int main() {
    Node* head = nullptr;

    // Insert elements
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    insert(head, 50);

    // Display the list
    cout << "Linked List: ";
    display(head);

    return 0;
}

