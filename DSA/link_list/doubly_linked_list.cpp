#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

    node(int val) {
        data = val;
        prev = next = NULL;
    }
};

class doublylist {
public: 
    node* head;
    node* tail;

    doublylist() {
        head = tail = NULL;
    }

    void push_front(int val) {
        node* newNode = new node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode ->next = head;
            head ->prev = newNode;
            head = newNode;
        }
    }

    void pop_front(){
        node* temp = head;
        head = head ->next;

        if (head != NULL){ //new positon of head is not null
            head ->prev = NULL;
        }

        temp ->next = NULL;
        delete temp;
    }
    void printlist(){
        node* temp = head;
        while(temp != NULL){
            cout<< temp ->data<< " <-> ";
            temp = temp ->next;
        }
        cout<<" NULL \n";
    }
};

int main() {
    doublylist dbll;

    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);
    dbll.push_front(0);

    dbll.printlist();
    return 0;
}