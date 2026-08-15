// #include <iostream>
// using namespace std; 

// class Student {
// public: //----------------------------- PUBLIC ACCESS MODIFIER
//     string name;
//     int roll_number;
//     float cgpa;

//     void get_percentage() {
//         cout<< (cgpa * 10)<<"%"<<endl;
//     }
// };

// int main(){
//     Student s1;

//     s1.name = "Arslan";
//     s1.roll_number = 9;
//     s1.cgpa = 8.95;

//     s1.get_percentage();
//     return 0;
// }


//-------------------------------PRIVATE ACCESS MODIFIER
// #include <iostream>
// using namespace std;

// class BankAccount{
// private:
//     int balance;
// public:
//     string holderName;

//     void update_balance(int b){
//         balance = b;
//     }

//     void get_balance() {
//         cout<<"Your account balance is "<<balance<<" rupees.\n";
//         return;
//     }

// };

// int main(){
//     BankAccount b1;

//     b1.holderName = "Arslan";
//     b1.update_balance(89000);

//     b1.get_balance();
    
//     return 0;
//}


//----------------------------------- practice question
#include <iostream>
#include <string>
using namespace std;

class User{
private:
    int id;
    string password;

public:
    string username;

    User(int id){
        this->id = id;
    }

    //setter
    void setname(string name){
        this ->username = name;
    }

    void setpassword(string pass){
        this ->password = pass;
    }

    void setId(int value){
        this ->id = value;
    }

    //getter
    void showId(){
        cout<<id<<endl;
    }

    void showpassword(){
        cout<<password<<endl;
    }

    void getusername(){
        cout<<username;
    }

};

int main() {
    User u1(8673726);

    u1.setname("Arslan");
    u1.setpassword("jh83!");

    u1.showId();
    u1.showpassword();
    u1.getusername();
    return 0;
}