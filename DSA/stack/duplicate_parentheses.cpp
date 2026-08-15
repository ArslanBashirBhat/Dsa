#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isDuplicate(string str){
    stack <char> s;

    for(int i=0; i<str.size(); i++){
        char currCh = str[i];

        if(currCh != ')'){ //non-closing
            s.push(currCh);
        } else { //closing
            if(!s.empty() && s.top() == '('){
                return true; //duplicate exists
            }

            while(!s.empty() && s.top() != '('){
                s.pop();
            }

            if(!s.empty()){
                s.pop();
            }
        }
    }
    return false; //duplicate does not exist
}

int main() {
    string str1 = "((a+b))";
    string str2 = "((a+b)+(c+d))";

    cout<<isDuplicate(str1)<<endl;
    cout<<isDuplicate(str2)<<endl;

    return 0;
}
