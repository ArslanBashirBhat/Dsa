#include <iostream>
#include <vector>

using namespace std;

int firstOccurance(const vector <int> &vec, int i, int target){

    if (i == vec.size()){
        return -1;
    }
    
    if (vec[i] == target){
        return i;
    }

    return firstOccurance(vec, i+1, target);
}

int main() {
    vector <int> vec = {1,2,2,3,3,4,5};
    int n = vec.size();

    cout<<firstOccurance(vec, 0, 3);
    return 0;
}