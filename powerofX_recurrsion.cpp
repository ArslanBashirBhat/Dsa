#include <iostream>

using namespace std;

int power(int x, int n){
    if(n == 0){
        return 1;
    }
    
    int halfpower = power(x, n/2);
    int fullPower = halfpower * halfpower;

    if(n % 2 != 0){
        return fullPower * x;
    } 
    return fullPower;
}

int main() {
    cout<<power(2, 10);
    return 0;
}