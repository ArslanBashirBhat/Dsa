//recursion ---- when a function repeatedly calls itself

#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 0){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    int result = factorial(7);
    cout<<result;
    return 0;
}