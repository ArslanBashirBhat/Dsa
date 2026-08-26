#include <iostream>
using namespace std;

void toUpper(char str[], int n){
    for(int i=0; i<n; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            continue;
        } else{
            int pos = str[i] - 'a';
            str[i] = pos + 'A';
    }
    }
    cout<<str;
        
}

int main() {
    char str[] = "ApPlE";
    int n = strlen(str);

    toUpper(str, n);
    return 0;
}