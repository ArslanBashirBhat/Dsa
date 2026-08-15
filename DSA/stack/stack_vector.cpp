#include <iostream>
#include <stack>
#include <vector>

using namespace std;

//stack using vector
class Stack {
vector <int> vec;
public:
    void push(int val){ //O(1) time complexity
        vec.push_back(val);
    }

    void pop() { //O(1) time complexity
        if (isEmpty()) {
            cout<<"The STACK is empty.\n";
            return;
        }
        vec.pop_back();
    }

    int top() { //O(1)
        if (isEmpty()){
            cout<<"STACK is empty.\n";
            return -1;
        }
        int last_idx = vec.size() - 1; //index of vector starts from 0 & size func counts from 1. 
        return vec[last_idx];
    }

    bool isEmpty() { // O(1)
        return vec.size() == 0;
    }
    
};

int main() {
    Stack s; // s is the object of our stack

    s.push(3);
    s.push(2);
    s.push(1);

    while(s.isEmpty() == false) {
        cout<< s.top() <<" ";
        s.pop();
    }
    return 0;
}
