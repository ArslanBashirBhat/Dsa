#include <iostream>
using namespace std;

bool validPallindrome(char ch[], int n){
    int st=0, end=n-1;
    while(st < end){
        if(ch[st] != ch[end]){
            return false;
        } else {
            st++;
            end--;
        }
    }
    return true;
}

int main() {
    char ch[] = "dad";
    int n = strlen(ch);

    int result = validPallindrome(ch, n);
    if(result == 1){
        cout<<"Valid Pallindrome";
    } else {
        cout<<"NOT a Pallindrome";
    }
    return 0;
}