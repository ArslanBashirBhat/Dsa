// #include <iostream>
// #include <vector>
// #include <list>
// #include <string>

// using namespace std;
// //stack using linked list
// template <typename T>
// class Stack {
//     list <T> ll; //list from STL, name given ll & data type T(passed at the time of object creation).

// public: 
//     void push(T val){
//         ll.push_front(val);
//     }

//     void pop() {
//         ll.pop_front();
//     }

//     T top() {
//         return ll.front(); //head of our linked list behaves as top of our stack.
//     }

//     bool isEmpty() {
//         return ll.size() == 0;
//     }
    
// };
// int main() {
//     Stack <int> s;

//     s.push(3);
//     s.push(2);
//     s.push(1); 

//     while(s.isEmpty() == false){
//         cout<< s.top() << " ";
//         s.pop();
//     }
//     return 0;
// }


//implementation without using STL list... khudse sab kch bananaaa hai.
// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;
// template <typename T>
// class node {
//     public:
//     T data;
//     node<T>* next;

//  // constructor
//     node (T val){
//         data = val;
//         next = NULL;
//     }
// };
// template <typename T>
// class Stack {
//     node<T>* head;

// public :
//     Stack() {
//         head = NULL;
//     }
//     void push(T val){
//         node<T>* newNode = new node<T>(val);
//         if (head == NULL){
//             head = newNode;
//         } else {
//             newNode ->next = head;
//             head = newNode;
//         }
//     }

//     void pop(){ //prop_front()
//         if (isEmpty()) {
//             return;
//         }
//         node<T>* temp = head;
//         head = head ->next;
//         delete temp;
        
//     }

//     T top() { //return head data
//         return head ->data;
//     }

//     bool isEmpty() {
//         return head == NULL;
//     }
// };

// int main() {
//     Stack <int> s;

//     s.push(3);
//     s.push(2);
//     s.push(1);

//     while(s.isEmpty() == false){
//         cout<< s.top() << " ";
//         s.pop();
//     }
    
//     return 0;
// }

// using STACK STL
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack <int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while(s.empty() == false) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}