// also known as reorder list
// #include <iostream>
// using namespace std;

// class node {
//     public:
//     int data;
//     node* next;

// public:
//     node (int val){
//         data = val;
//         next = NULL;
//     }
// };

// class list {
//     node* head;
//     node* tail;

// public:
//     list(){
//         head = NULL;
//         tail = NULL;
//     }
// };

// int main() {
//     list ll;
//     return 0;
// }


////////////////
#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

public:
    node (int val){
        data = val;
        next = NULL;
    }

};

class list {
    public:
    node* head;
    node* tail;


    list(){
        head = NULL;
        tail = NULL;
    }

///// adding element at beginning;
    void push_front(int val) {
        node* newNode = new node(val);

        if ( head == NULL){
            head = tail = newNode;
        } else {
            newNode ->data = val;
            newNode ->next = head;
            head = newNode;
        }
    }

///// adding element at last;
void push_back(int val){
    node* newNode = new node(val);

    if (head == NULL) { //the linked list is empty
        head = tail = newNode;
    } else {
        tail ->next = newNode;
        tail = newNode;
    }
 }

///// adding element at given position
void insert_position(int val, int pos) {
    node* newNode = new node(val);
    node* temp = head;

    for(int i=0; i<pos-1; i++){
        if(temp == NULL){
            cout<<"Invalid Position !!";
            return;
        } else {
            temp = temp ->next;
        }
    }
    newNode ->next = temp ->next;
    temp ->next = newNode;
}

///// printing linked list
    // void printlist() {
    //     node* temp = head;

    //     while(temp != NULL) {
    //     cout<<temp ->data<<" -> ";
    //     temp = temp ->next;
    //     }
    //     cout<<" NULL "<<endl;
    // }

////// iterative search to find key
    int itr_search(int key) {
        node* temp = head;
        int idx = 0;
        while(temp != NULL) {
            if (temp ->data == key){
                return idx;
            }
            temp = temp ->next;
            idx++;
        }
        return -1;
    }

///// reverse a linked list -- use 3 node prev, curr, next
    // void reverse() {
    //     node* curr = head;
    //     node* prev = NULL;

    //     while (curr != NULL) {
    //         node* next = curr ->next;
    //         curr ->next = prev;

    //         //updation for next iteration
    //         prev = curr;
    //         curr = next;
    //     }
    //     head = prev;
    // }
///// size of linked list;
    int getsize(){
        node* temp = head;
        int size = 0;

        while(temp != NULL){
            temp = temp ->next;
            size++;
        }
        return size;
    }
////// remove from nth node;
    void remove_nth_node(int n) {
        node* prev = head; // can use temp name also instead of prev
        int size = getsize();
        for(int i=0; i<(size-n); i++){
            prev = prev ->next;
        }
        prev ->next = prev ->next ->next;
    }

    //// zig - zag code
node* mid_split(node* head) {
    node* slow = head;
    node* fast = head;
    node* prev = NULL;

    while (fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    if (prev != NULL) {
        prev->next = NULL; 
    }
    return slow; //it becomes the head of right list
}

node* reverse(node* head) {
    node* curr = head;
    node* prev = NULL;

    while (curr != NULL) {
        node* next = curr ->next;
        curr ->next = prev;

        //updation for next iteration
        prev = curr;
        curr = next;
    }
    return prev; // prev is head of reversed LL 
}

node* ZigZagLL(node* head){

    node* righthead = mid_split(head);
    node* rightheadRev = reverse(righthead);

    //Alternate Merging : 
    node* left = head;
    node* right = rightheadRev;
    node* tail = right;

    while(left != NULL && right != NULL){
        node* nextLeft = left ->next;
        node* nextright = right ->next;

        left ->next = right;
        right ->next = nextLeft;

        tail = right;

        left = nextLeft;
        right = nextright;
    }

    if(right != NULL){
        tail ->next = right;
    }
    return head;

}

void printlist() {
    node* temp = head;

    while(temp != NULL) {
    cout<<temp ->data<<" -> ";
    temp = temp ->next;
    }
    cout<<" NULL "<<endl;
}

};



int main() {
    list ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);
    
    ll.printlist();

    // ll.push_back(5);
    // ll.push_back(6);
    // ll.push_back(7);

    // ll.printlist();

    // ll.insert_position(100,2);

    // ll.printlist();

    // cout<<ll.itr_search(3)<<"th index. "<<endl;

    // ll.reverse();

    // ll.printlist();

    // ll.remove_nth_node(2);

    // ll.printlist();
    ll.ZigZagLL(ll.head);
    ll.printlist();
    return 0;
}