#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void queue_reversal(queue<int> &q){ //pass by reference
    stack<int> s;

    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

int main(){
    queue<int> q;

    for(int i=0; i<=10; i++){
        q.push(i);
    }

    queue_reversal(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}