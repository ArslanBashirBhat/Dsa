#include <iostream>
using namespace std;

class Animal{
public:
    string color;

    void eats(){
        cout<<"Animal is eating. \n";
    }

    void breaths(){
        cout<<"Animal is breathing. \n";
    }
};

class Fish : public Animal{
public:
    int fins;

    void swim(){
        cout<<"Fish swims.\n";
    }
};

int main() {
    Animal lion;
    Fish shark;
    lion.color = "golden brown\n";

    shark.fins = 3;
    cout<<shark.fins<<endl;
    shark.swim();

    shark.color = "light blue \n";
    cout<<shark.color;

    shark.eats();
    shark.breaths();

    return 0;
}