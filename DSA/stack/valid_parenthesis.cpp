#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string str){
    stack <char> s;

    for(int i=0; i<str.size(); i++){
        char currCh = str[i];

        if(currCh == '(' || currCh == '[' || currCh == '{') {
            s.push(currCh);
        } else {
            if(s.empty()){
                return false;
            }

            //matching
            char top = s.top(); // int top = s.top() -- does implicit type conversion
            if(top == '(' && currCh == ')' || 
                top == '{' && currCh == '}' || 
                top == '[' && currCh == ']') {
                s.pop();
            } else {
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }else {
        return false;
    }
}
int main() {
    string str1 = "([}])";
    string str2 = "([{}])";

    cout<<isValid(str1)<<endl;
    cout<<isValid(str2)<<endl;
    return 0;
}