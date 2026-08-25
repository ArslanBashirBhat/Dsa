#include <iostream>
using namespace std;

void trap(int heights[], int n){
    int left_max[20000], right_max[20000];
    left_max[0] = heights[0];
    right_max[n-1] = heights[n-1]; 

    for(int i=1; i<n; i++){
        left_max[i] = max(left_max[i-1], heights[i-1]);
    }

    for(int i=n-2; i>0; i--){
        right_max[i] = max(right_max[i+1],heights[i+1]);
    }

    int waterTrapped = 0;
    
    for(int i=0; i<n; i++){
        int currWater = min(left_max[i], right_max[i]) - heights[i];
        if(currWater > 0){
            waterTrapped += currWater;
        }
    }
    cout<<"Water Trapped = "<<waterTrapped;
}

int main() {
    int heights[7] = {4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(int);

    trap(heights, n);

    return 0;
}