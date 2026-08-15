#include <iostream>
#include <string>
#include <stack>

using namespace std;

string reverseString(string str) {
    string ans;

    stack <char> s;
    for(int i=0; i<str.size(); i++){
        s.push(str[i]);
    }

    while(s.empty() == false){  // empty() return either true or false i.e false == false -- means true enter loop 
        ans += s.top();
        s.pop();
    }
    return ans;
}

int main() {
    string str = "abcd";
    cout <<"REVERSE OF "<<str <<" is :"<<reverseString(str)<<endl;
    return 0;
}