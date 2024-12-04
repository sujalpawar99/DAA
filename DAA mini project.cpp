#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to reverse the linked list in groups of size k
Node* reverseInGroups(Node* head, int k) {
    if (!head || k == 1) return head;

    Node* current = head;
    Node* prev = nullptr;
    Node* next = nullptr;
    int count = 0;

    // Reverse the first k nodes
    while (current && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    // Recursively reverse the rest of the list
    if (next) {
        head->next = reverseInGroups(next, k);
    }

    return prev; // New head of the reversed group
}

// Function to append a node to the linked list
void append(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data;
        if (current->next) cout << " -> ";
        current = current->next;
    }
    cout << endl;
}

// Main function
int main() {
    Node* head = nullptr;
    int n, k, value;

    // Input number of nodes
    cout << "Enter the number of nodes in the linked list: ";
    cin >> n;

    cout << "Enter the values for the linked list:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> value;
        append(head, value);
    }

    // Input group size
    cout << "Enter the group size (k): ";
    cin >> k;

    cout << "Original Linked List:" << endl;
    printList(head);

    head = reverseInGroups(head, k);

    cout << "Reversed Linked List in Groups of " << k << ":" << endl;
    printList(head);

    return 0;
}





refer this code#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to reverse the linked list in groups of size k
Node* reverseInGroups(Node* head, int k) {
    if (!head || k == 1) return head;

    Node* current = head;
    Node* prev = nullptr;
    Node* next = nullptr;
    int count = 0;

    // Reverse the first k nodes
    while (current && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    // Recursively reverse the rest of the list
    if (next) {
        head->next = reverseInGroups(next, k);
    }

    return prev; // New head of the reversed group
}

// Function to append a node to the linked list
void append(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data;
        if (current->next) cout << " -> ";
        current = current->next;
    }
    cout << endl;
}

// Main function
int main() {
    Node* head = nullptr;
    int n, k, value;

    // Input number of nodes
    cout << "Enter the number of nodes in the linked list: ";
    cin >> n;

    cout << "Enter the values for the linked list:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> value;
        append(head, value);
    }

    // Input group size
    cout << "Enter the group size (k): ";
    cin >> k;

    cout << "Original Linked List:" << endl;
    printList(head);

    head = reverseInGroups(head, k);

    cout << "Reversed Linked List in Groups of " << k << ":" << endl;
    printList(head);

    return 0;
}


