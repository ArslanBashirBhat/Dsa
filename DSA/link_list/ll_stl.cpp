#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void printlist(list<int> ll){
    list<int> :: iterator itr;
for(itr = ll.begin(); itr != ll.end(); itr++){
    cout<<(*itr)<<" -> ";
}
cout<<"NULL"<<endl;

}

int main() {
    list<int> ll;

    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(3);
    ll.push_back(4);

    printlist(ll);

    //size of linked list
    cout<<ll.size()<<endl;

    //front() returns head value;
    cout<<"head = "<<ll.front()<<endl;

    //back() returns tail value;
    cout<<"Tail = "<<ll.back()<<endl;

    //pop_front()
    ll.pop_front();

    //pop_back();
    ll.pop_back();
    return 0;
}
