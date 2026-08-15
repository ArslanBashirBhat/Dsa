#include <iostream>
using namespace std;

// 1. Sabse pehle Base Structure (Node)
class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

// 2. Helper Function: List ko todne ke liye (Called by mergeSort)
node* mid_split(node* head) {
    node* slow = head;
    node* fast = head;
    node* prev = NULL;

    while (fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    if (prev != NULL) {
        prev->next = NULL; 
    }
    return slow; 
}

// 3. Helper Function: Sorted lists ko jodne ke liye (Called by mergeSort)
node* merge(node* left, node* right) {
    if (left == NULL) return right;
    if (right == NULL) return left;

    node* result = NULL;
    if (left->data <= right->data) {
        result = left;
        result->next = merge(left->next, right);
    } else {
        result = right;
        result->next = merge(left, right->next);
    }
    return result;
}

// 4. Main Algorithm: Jo todne aur jodne ko control karta hai (Called by main)
node* mergeSort(node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    node* righthead = mid_split(head);

    node* left = mergeSort(head); 
    node* right = mergeSort(righthead); 

    return merge(left, right);
}

// 5. Utility Function: Sirf result dekhne ke liye
void print(node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// 6. Entry Point: Jahan se execution shuru hota hai
int main() {
    node* head = new node(10);
    head->next = new node(1);
    head->next->next = new node(5);
    head->next->next->next = new node(2);
    head->next->next->next->next = new node(8);

    cout << "Unsorted: ";
    print(head);

    head = mergeSort(head);

    cout << "Sorted:   ";
    print(head);

    return 0;
}