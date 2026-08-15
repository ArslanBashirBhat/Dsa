#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,3,1,4,7,6,5,8,8,3,9};
    int n = sizeof(arr) / sizeof(int);

    //sort(arr, arr+n); // by default ascending order
    sort(arr, arr+n, greater<int>()); // descending order

    for(int i=0; i<n ; i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}