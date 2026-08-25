#include <iostream>
using namespace std;

bool stairCaseSearch(int arr[][4], int n, int m, int key){
    int i=0, j=m-1;
    while(i<n && j>=0){
        if(arr[i][j] == key){
            cout<<"Key Found at index :"<<i<<", "<<j<<endl;
            return 1;
        } else if(arr[i][j] > key){
            j--;
        } else {
            i++;
        }
    }
    cout<<"Key Not Found."<<endl;
    return 0;
}

int main() {
    int mat[4][4] = {{10,20,30,40},
                    {50,60,70,80},
                    {90,100,110,120},
                    {130,140,150,160}};

    stairCaseSearch(mat,4,4,120);
    return 0;
}