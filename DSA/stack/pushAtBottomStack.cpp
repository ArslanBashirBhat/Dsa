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

int main(){
    stack <int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    pushAtBottom(s, 40);
    while(s.empty() == false){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

