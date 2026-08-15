#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue <int> q;

    //enqueue
    q.push(23);
    q.push(234);
    q.push(11);
    q.push(113);

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;

    cout<<q.back()<<endl;
    return 0;
}