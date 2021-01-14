#include <iostream>
using namespace std;

class A{
    int a;
    public:
        A() : a(10) {}
        void operator++(){
            ++a;
        }
        void operator++(int){
            a++;
        }
        void operator--(){
            --a;
        }
        void operator--(int){
            a--;
        }        

        void show(){
            cout << "value: " << a << endl;
        }
};



int main(int argc, char const *argv[])
{
    A obj;

    cout << "initial value: ";
    obj.show();
    ++obj;
    obj.show();
    obj++;
    obj.show();
    --obj;
    obj.show();
    obj--;
    cout << "final value: ";
    obj.show();

    return 0;
}
