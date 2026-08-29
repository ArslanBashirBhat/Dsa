#include <iostream>
#include <vector>

using namespace std;

vector <int> pairSum(vector<int>vec, int target){
    int st=0, end=vec.size();
    int currSum = 0;
    vector <int> ans;

    while(st < end){
        currSum = vec[st] + vec[end];
        if(currSum == target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        } else if(currSum > target){
            end--;
        } else {
            st++;
        }
    }
    return ans;
}

int main() {
    vector <int> vec = {2,7,11,15};
    int target = 9;
    vector <int> result = pairSum(vec, target);
    cout<< result[0]<< ", "<<result[1];
    return 0;
}