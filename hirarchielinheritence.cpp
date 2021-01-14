#include <iostream>
using namespace std;

class Mammal {
    public:
        void speak(){
            cout << "Iam a mammal" << endl;
        } 
};

class Cow : public Mammal {
    public:
        void chew(){
            cout << "I chew food" << endl;
        } 
};

class Horse : public Mammal {
    public:
        void run(){
            cout << "I run so fast" << endl;
        }
};


int main(int argc, char const *argv[])
{
    Cow c;
    Horse h;
    c.chew();
    h.run();
    return 0;
}
