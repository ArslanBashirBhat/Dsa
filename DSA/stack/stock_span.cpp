#include <iostream>
#include <vector>
#include <stack>

using namespace std;
void stock_span_problem(vector <int> stocks, vector <int> span){
    span.resize(stocks.size());

    stack <int> s;
    s.push(0);
    span[0] = 1;

    for(int i=1; i<stocks.size(); i++){
        int curr = stocks[i];
        while(!s.empty() && curr >= stocks[s.top()]){
            s.pop();
        }
        if (s.empty()){
            span[i] = i+1;
        } else {
            int prevHigh = s.top();
            span[i] = i - prevHigh;
        }

        s.push(i); // pushing the new prevHigh in stack
    }

    for(int i=0; i<span.size(); i++){
            cout<<span[i]<<", ";
        }
    cout<<endl;
};


int main() {
    vector <int> stocks = {100, 80, 60, 70, 60, 85, 100};
    vector <int> span = {};

    stock_span_problem(stocks, span);
    return 0;
}