#include <iostream>
using namespace std;

class Animal {
public:
    void eats(){
        cout<<"Eats \n";
    }

    void breathe(){
        cout<<"Breathes \n";
    }
};

class Mammal : public Animal {
public:
    string bloodtype = "warm";
};

class Dog : public Mammal {
public:
    void tailwag() {
        cout<<"Doggy is wagging tail";
    }
};

int main() {
    Dog d1;

    d1.eats();
    d1.breathe();

    cout<<d1.bloodtype<<endl;

    d1.tailwag();
    return 0;
}