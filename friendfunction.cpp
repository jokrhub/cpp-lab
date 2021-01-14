#include <iostream>
using namespace std;


class B;

class A {
    int x;
    public:
        void set(int x){
            this->x = x;
        }
        int get(){
            return x;
        }
        friend int add(A, B);
};

class B {
    int x;
    public:
        void set(int x){
            this->x = x;
        }
        int get(){
            return x;
        }
        friend int add(A, B);
        
};

int add(A a, B b){
    return a.x + b.x; // private variables can be accessed outside using friend function
}

int main(int argc, char const *argv[])
{
    
    A a;
    B b;
    a.set(10);
    b.set(20);
    cout << "Sum of private variables in two different class objects: " << add(a, b) << endl;
    return 0;
}
