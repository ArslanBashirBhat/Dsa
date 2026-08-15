#include <iostream>
#include <vector>

using namespace std;

int search(int arr[], int st, int end, int target){
    if(st > end){
        return -1;
    }
    int mid = st + (end-st)/2;
    if(arr[mid] == target){
        return mid;
    }

    if (arr[st] <= arr[mid]) { //L1
        if(arr[st] <= target && target <= arr[mid]){
            //left 
            return search(arr, st, mid-1, target);
        } else {
            //right half
            return search(arr, mid+1, end, target);
        }
    } else {
        //L2
        if(arr[mid] <= target && target <= arr[end]){
            //right 
            return search(arr, mid+1 ,end, target );
        } else {
            return search(arr, st, mid-1, target);
        }
    }
}

int main() {
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;

    cout<<"INDEX : "<<search(arr, 0, n-1, 7);// print target
    return 0;
}