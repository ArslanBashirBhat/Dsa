

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//stack using vector 
template <typename T> //we can also use "template <class T>" class & typename "are keywords and signify T is a data type indicator.

class Stack {
vector < T > vec;
public: 
    void push(T val){
        vec.push_back(val);
    }

    void pop(){
        if (isEmpty()) {
            cout<<"Stack is Empty. \n";
            return;
        }
        vec.pop_back();
    }

    T top() {
        if (isEmpty()){
            cout<<"Stack is Empty. \n";
            return -1;
        }
        int last_idx = vec.size() - 1;
        return vec[last_idx];
    }

    bool isEmpty(){
        return vec.size() == 0;
    }
};

int main() {
    Stack <int> s;
    Stack <char> ch;

    s.push(0);
    s.push(0);
    s.push(6);
    s.push(6);

    ch.push('R');
    ch.push('A');
    ch.push('H');
    ch.push('T');

    while(s.isEmpty() == false){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    while(ch.isEmpty() == false){
        cout<<ch.top()<<" ";
        ch.pop();
    }
    cout<<endl;
    return 0;
}