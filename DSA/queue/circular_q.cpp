#include <iostream>

using namespace std;

class Queue{
    int* arr;

    int capacity;
    int currSize;

    int f, r;
public:
    Queue(int size){
        capacity = size;
        arr = new int[capacity];

        currSize = 0;
        f = 0;
        r = -1;
    }
//enqueue
    void push(int val){
        if(currSize == capacity){
            cout<<"Queue is FULL"<<endl;
            return;
        }
        r = (r + 1) % capacity;
        arr[r] = val;
        currSize++;
    }
//dequeue
    void pop(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        f = (f + 1) % capacity;
        currSize--;
    }
//front element in queue
    int front(){
        if(isEmpty()){
            cout<<"QUEUE is empty"<<endl;
            return -1;
        }
        return arr[f];
    }

    bool isEmpty(){
        return currSize == 0;
    }

    void printRear(){
        cout<<arr[r]<<endl;
    }
};

int main() {
    Queue q(5);

    q.push(91);
    q.push(92);
    q.push(93);
    q.push(94);
    q.push(95);

    cout<<q.front()<<endl;
    q.pop();

    cout<<q.front()<<endl;
    q.push(96);

    q.pop();
    cout<<q.front()<<endl;

    q.push(97);
    q.printRear();
    return 0;
}