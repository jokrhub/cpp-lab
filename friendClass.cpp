#include <iostream>
using namespace std;

class B;

class A{
    int x;
    public:
        A() : x(10) {}

        friend class B;
};

class B {
    int y;
    public:
        B() : y(20) {}
        int add(){
            A obj_a;
            return obj_a.x+y;
        }
};

int main(int argc, char const *argv[])
{
    A a;
    B b;

    cout << "Adding private variable of class A to private variable of class B: " << b.add() << endl;
    return 0;
}
