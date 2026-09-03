#include <iostream>

using namespace std;

void decNum(int num) {
      if (num == 0) {
        return ;
    }
    cout<<num<<endl;
    decNum(num - 1);
  
}

int main() {
    decNum(5);
   
    return 0;
}