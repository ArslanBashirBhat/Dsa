#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

public:
    node (int val){
        data = val;
        next = NULL;
    }
};

class list {
public:
    node* head;
    node* tail;


    list(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        node* newNode = new node(val);

        if ( head == NULL){
            head = tail = newNode;
        } else {
            newNode ->data = val;
            newNode ->next = head;
            head = newNode;
        }
    }

    void pop_front() {
        if (head == NULL){
            cout<< "Linked List is Empty \n";
            return;
        } else {
            node* temp = head;
            head = head ->next;

            temp ->next = NULL;
            delete temp;
        }
    }
};

void printlist(node* head) {
    node* temp = head;

    while(temp != NULL) {
        cout<<temp ->data<<" -> ";
        temp = temp ->next;
    }
    cout<<" NULL "<<endl;
}

void remove_cycle(node* head) {
    node* slow = head;
    node* fast = head;
    bool isCycle = false;

    // Step 1: Detect cycle
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            isCycle = true;
            break;
        }
    }

    if (!isCycle) {
        cout << "cycle does not exist\n";
        return;
    }

    cout << "cycle exists\n";

    // Step 2: Remove cycle
    slow = head;

    if (slow == fast) { // tail → head case
        while (fast->next != slow) {
            fast = fast->next;
        }
        fast->next = NULL;
    } else {
        node* prev = fast;
        while (slow != fast) {
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL;
    }
}

int main() {
    list ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.tail ->next = ll.head;
    remove_cycle(ll.head);
    printlist(ll.head);
    return 0;
}