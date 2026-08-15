#include <iostream>
using namespace std;

// Returns the sum of first n natural numbers using recursion.
int sum_nat(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + sum_nat(n - 1);
}

int main() {
    int n = 5;
    int result = sum_nat(n);

    cout << "SUM OF FIRST " << n << " NATURAL NUMBERS: " << result;
    return 0;
}
