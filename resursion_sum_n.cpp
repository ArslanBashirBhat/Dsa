#include <iostream>
using namespace std;

int natSum(int n){
    if(n == 0){
        return 0;
    }

    return n + natSum(n-1); 
}

int main() {
    int result = natSum(5);
    cout<<result;
    return 0;
}