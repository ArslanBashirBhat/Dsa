#include <iostream>
using namespace std;

void revCharArr(char ch[], int n){
    int st=0, end=n-1;
    while(st <= end){
        swap(ch[st],ch[end]);
        st++;
        end--;
    }
    cout<<ch;
}

int main() {
    char ch[] = {"EDOC"};
    int n = strlen(ch);

    revCharArr(ch, n);
    return 0;
}