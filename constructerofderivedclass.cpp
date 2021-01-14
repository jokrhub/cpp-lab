#include <iostream>
using namespace std;

class Base{
    public:
    float real;    
        Base(float x=0) : real(x) {}

};

class Derived : public Base {
    float imag;
    public:
        // normal derived constructer
        // Derived(int x=0, float y=0) : imag(y) {
        //     real = x;
        // }

        // Efficient derived constructer
        Derived(int x=0, int y=0) : Base(x), imag(y) {

        }
        void show(){
            cout << "Real: " << real << endl;
            cout << "Imaginary: " << imag << endl;
        }    

};

int main(int argc, char const *argv[])
{
    Derived number(1, 12);
    number.show();
    return 0;
}
