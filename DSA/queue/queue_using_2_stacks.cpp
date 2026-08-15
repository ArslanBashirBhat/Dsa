#include <iostream>
#include <stack>

using namespace std;

class Queue{
    stack <int> s1, s2; //s1 is the main stack on which major operations are performed 

public: 
    void push(int val){
        //move elements from s1 -> s2
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(val); //new element inserted

        //move back elements from s2 -> s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    void pop(){
        if(s1.empty()){
            cout<<"Queue/Stack is empty";
            return;
        }
        s1.pop();
    }

    int front(){
        if(s1.empty()){
            cout<<"Queue/Stack is empty";
            return -1;
        }
        return s1.top();
    }

    bool empty(){
        return s1.empty();
    }
};

int main(){
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
//to print all the elements one by one while removing them simultanously
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}