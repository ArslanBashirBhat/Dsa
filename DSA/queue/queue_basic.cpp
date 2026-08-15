#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    node* head; //front
    node* tail; //rear

public: 
    Queue(){
        head = NULL;
        tail = NULL;
    }
//enqueue operation
    void push(int val) {
        node* newNode = new node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail ->next = newNode;
            tail = newNode;
        }
    }

//dequeue operation
    void pop(){
        if(head == NULL){
            cout<<"Queue is empty.";
            return;
        }else{
            node* temp = head;
            head = head ->next;

            delete temp;
        }
    }

//peek operation

    int peek(){
        if(isEmpty()){
            cout<<"Queue is empty.";
            return -1;
        } else {
            return head ->data;
        }
    }

//empty check
    bool isEmpty(){
        return head == NULL;
    }

};

int main() {
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    // while(!q.isEmpty()) {
    //     cout<<q.peek()<<", "<<endl;
    //     q.pop();
    // }
    // cout<<endl;

    // q.pop();
    // while(!q.isEmpty()) {
    //     cout<<q.peek()<<", "<<endl;
    //     q.pop();
    // }
    // cout<<endl;

    return 0;
}