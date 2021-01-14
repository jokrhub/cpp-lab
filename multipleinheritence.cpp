#include <iostream>
using namespace std;

class Mammal {
    public:
        void speak(){
            cout << "Iam a mammal" << endl;
        } 
};

class WingsAnimal {
    public:
        void flap(){
            cout << "I flap wings" << endl;
        } 
};

class Bat : public Mammal, public WingsAnimal {

};


int main(int argc, char const *argv[])
{
    Bat b;
    b.speak();
    b.flap();
    return 0;
}
