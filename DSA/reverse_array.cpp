#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int copyArr[n];

    for(int i=0; i<n; i++){
        int j = n-i-1;
        copyArr[i] = arr[j];
    }

    for(int i=0; i<n; i++){
        arr[i] = copyArr[i];
        cout<<arr[i]<<", ";
    }
    return 0;
}