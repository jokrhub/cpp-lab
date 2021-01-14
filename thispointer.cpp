#include <iostream>
using namespace std;

class A{
    string s;
    public:
        A() : s("Hello ") {}
    
        void concate(string s){
            this->s += s;
        }

        void show(){
            cout << "final String :" << s <<endl;
        }

        A& clone(){
            return *this;
        }
                    
};

int main(int argc, char const *argv[])
{
    A obj;
    obj.concate("Baa!");
    obj.show();

    A obj2 = obj.clone();
    obj2.show();

    return 0;
}
