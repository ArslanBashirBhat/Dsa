#include <iostream>
#include <queue>

using namespace std;

class Stack{
    queue<int> q1, q2;

public:
    Stack() = default; // no pre-seeded value needed for this implementation

    void push(int data){
        //move elements from q1 -> q2
        while(!q1.empty()){
            q2.push(q1.front());//adding elements into q2 from rear end
            q1.pop();//removing pushed elements from q1
        }
        
        q1.push(data);//new element inserted

        //add back elements from q2 -> q1
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }

    void pop(){
        if(q1.empty()){
            cout<<"Stack using queue is empty."<<endl;
            return;
        }
        q1.pop();

    }

    int top(){
        return q1.front();
    }

    bool empty(){
        return q1.empty();
    }

};

int main() {
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
