// #include <iostream>
// #include <deque>

// using namespace std;

// int main() {
//     deque <int> deq;

//     deq.push_front(2);
//     deq.push_front(1);

//     deq.push_back(3);
//     deq.push_back(4);

//     deq.pop_front();
//     deq.pop_back();

//     cout<<deq.front()<<endl;
//     cout<<deq.back()<<endl;
//     return 0;
// }






//queue using deque
// #include <iostream>
// #include <deque>

// using namespace std;

// class Queue {
//     deque<int> deq;
// public: 

// void push(int val){ //enqueue
//     deq.push_back(val);
// }

// void pop(){ //dequeue
//     if(!deq.empty()){
//         deq.pop_front();
//     }
// }

// int front(){
//     return deq.front();
// }

// };

// int main(){
//     Queue q;
    
//     q.push(10);
//     q.push(20);
//     q.push(30);

//     cout << q.front() << endl;

//     q.pop();

//     cout << q.front() << endl;

//     return 0;
// }






//stack using deque
#include <iostream>
#include <deque>

using namespace std;

class Stack{
    deque<int> deq;
public:
    void push(int val){
        deq.push_front(val);
    }

    void pop(){
        if(!deq.empty()){
            deq.pop_front();
        }
    }

    int top() {
        return deq.front();
    }

    bool empty(){
        return deq.empty();
    }
};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    // cout<<s.top()<<endl;

    // s.pop();

    // cout<<s.top();

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}