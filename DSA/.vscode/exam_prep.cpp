#include <iostream>
using namespace std;

class node{
public :
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class list{
    node* head;
    node* tail;

public:
    list(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        node* newNode = new node(val);

        newNode ->next = head;
        head = newNode;

        if(tail == NULL){   // list was empty
            tail = newNode;
        }
    }

    void push_back(int val){
        node* newNode = new node(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            tail ->next = newNode;
            tail = newNode;

        }
    }

    void printLL(){
        node* temp = head;
        if (head == NULL){
            cout<<"EMPTY LINKED LIST";
        }
        while(temp != NULL){
            cout<<temp ->data<<" ,";
            temp = temp ->next;
        }
        cout<<endl;
    }

    void insertmid(int val, int pos){
        node* newNode = new node(val);
        node* temp = head;

        for(int i=0; i<pos; i++){
            if(temp == NULL){
                cout<<"Invalid Position.";
                return;
            } else {
                temp = temp ->next;
            }
        }
        newNode ->next = temp ->next;
        temp ->next = newNode;
    }

    void deletelist() {
        node* temp = head;
        while(temp != NULL){
            node* nextNode = temp ->next;
            delete temp;
            temp = nextNode;
        }
        head = NULL;
        tail = NULL;
    }

    void pop_front(){
        if(head == NULL){
            cout<<"Empty Linked List.\n";
            return;
        } else {
            node* temp = head;
            head = head ->next;

            delete temp;
        }
    }

    void pop_back() {
        node* temp = head;
        while(temp ->next != tail){
            temp = temp ->next;
        }
        temp ->next = NULL;
        delete tail;
        tail = temp;
    }
};


int main() {
    list ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);

    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);

    ll.insertmid(69,2);

    ll.pop_front();
    ll.pop_back();
    ll.printLL();
    return 0;
}
