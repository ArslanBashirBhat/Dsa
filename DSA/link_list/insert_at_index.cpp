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

    void insert_position(int val, int pos) {
        node* newNode = new node(val);
        node* temp = head;

        for(int i=0; i<pos-1; i++){
            if(temp == NULL){
                cout<<"Invalid Position !!";
                return;
            } else {
                temp = temp ->next;
            }
        }
        newNode ->next = temp ->next;
        temp ->next = newNode;
    }

    void printlist() {
        node* temp = head;

        while(temp != NULL) {
            cout<<temp ->data<<" -> ";
            temp = temp ->next;
        }
        cout<<" NULL ";
    }
};


int main() {
    list ll;
    
    ll.insert_position(100,2);
    return 0;
}