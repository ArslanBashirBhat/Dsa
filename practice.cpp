#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, count=0;
    cout<<"Enter upper limit :";
    cin>>n;

    for(int i=2; i<=n; i++){
        bool isPrime = true;
        for(int j=2; j<=sqrt(i); j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}