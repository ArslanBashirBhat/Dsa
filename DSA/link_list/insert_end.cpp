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

    void push_back(int val){
        node* newNode = new node(val);

        if (head == NULL) { //the linked list is empty
            head = tail = newNode;
        } else {
            tail ->next = newNode;
            tail = newNode;
        }
     }
//print elements of linked list
     void printList() {
        node* temp = head;

        while(temp != NULL) {
            cout<< temp ->data <<" -> ";
            temp = temp ->next;
        }
        cout<<"NULL";
     }
};

int main() {
    list ll;

    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);

    ll.printList();
    return 0;
}