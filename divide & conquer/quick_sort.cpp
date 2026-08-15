#include <iostream>
#include <vector>

using namespace std;

void printArr(int arr[], int n){ 
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

int partition(int arr[],int st,int end){
    int i = st-1;
    int pivot = arr[end];

    for(int j=st; j<end; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[end]);
    //pivotIdx = i
    return i;
}

void quickSort(int arr[], int st, int end){
    if(st >= end){
        return;
    }

    int pivotIdx = partition(arr, st, end); //mainstep

    quickSort(arr, st, pivotIdx-1); // lefthalf
    quickSort(arr, pivotIdx + 1, end); //right half
}

int main() {
    int arr[6] = {6,3,7,5,2,4};
    int n = 6;

    quickSort(arr, 0, n-1);

    printArr(arr, n);
    return 0;
}