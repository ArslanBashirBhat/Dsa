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
    node* head;
    node* tail;

public:
    list(){
        head = NULL;
        tail = NULL;
    }

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
};

int main() {
    list ll;

    cout<<ll.itr_search(2); //-1 because ll is empty right now
    return 0;
}
