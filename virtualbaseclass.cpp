#include <iostream>
using namespace std;

class Mammal {
    public:
        void speak(){
            cout << "Iam a mammal" << endl;
        } 
};

// first do hirarchial inheritence as below to get Cow and Horse


class Cow : virtual public Mammal {
    public:
        void chew(){
            cout << "I chew food" << endl;
        } 
};

class Horse : virtual public Mammal {
    public:
        void run(){
            cout << "I run so fast" << endl;
        }
};

// added virtual before Mammal to remove duplication of speak function
// now do multiple inheritence of above two cow and horse

class CowXHorse : public Cow, public Horse {

};

int main(int argc, char const *argv[])
{
    CowXHorse ch;
    ch.speak();
    ch.chew();
    ch.run();
    return 0;
}
