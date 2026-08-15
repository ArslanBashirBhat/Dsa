#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class list {
    node* head;
    node* tail;

public: 
    list() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        node* newNode = new node(val);

        if ( head == NULL){
            head = tail = newNode;
        } else {
            newNode -> data = val;
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

    void printList() {
        node* temp = head;

        while(temp != NULL) {
            cout<< temp -> data << " -> ";
            temp = temp -> next;
        }
        cout<< "NULL \n";
    }
};

int main() {
    list ll;

    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);

    ll.printList();

    ll.pop_front();

    ll.printList();
    return 0;
}



////