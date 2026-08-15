#include <iostream>
#include <stack>

using namespace std;

void pushAtBottom(stack<int> &s, int val){  // we use &s for pass by reference
    if(s.empty()){
        s.push(val); //push at bottom == push at top for empty stack
        return;
    }
    int temp = s.top();
    s.pop();
    pushAtBottom(s, val);
    
    s.push(temp);
}

void reverseStack(stack<int> &s){
    if(s.empty()) {
        return;
    }

    int temp = s.top();
    s.pop();

    reverseStack(s);
    pushAtBottom(s, temp);
    
}

void printStack(stack<int> s) {
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
}
int main() {
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);
    printStack(s);

    reverseStack(s);
    printStack(s);
    return 0;
}