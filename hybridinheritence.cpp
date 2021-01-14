#include <iostream>
using namespace std;

class Mammal {
    public:
        void speak(){
            cout << "Iam a mammal" << endl;
        } 
};

class Ruminent : public Mammal{ // single inheritence from Mammal
    public:
        void milk(){
            cout << "I give milk" << endl;
        }
};

class WingsAnimal {  
    public:
        void flap(){
            cout << "I flap wings" << endl;
        } 
};

class Bat : public Ruminent, public WingsAnimal { // Multiple inherehence Ruminent and WingsAnimal

};


int main(int argc, char const *argv[])
{
    Bat b;
    b.speak();
    b.milk();
    b.flap();
    return 0;
}
