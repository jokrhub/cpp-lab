#include <iostream>
using namespace std;

class A{
    
    int a;
    public:
        
        A() : a(10) {}               

        void show(){
            cout << "value: " << a << endl;
        }

        friend void operator++(A&);
        friend void operator--(A&);
};

void operator++(A& obj){
    
    ++obj.a;
   
}

void operator--(A& obj){
    --obj.a;
    
}


int main(int argc, char const *argv[])
{
    A obj;
    cout << "initial value: ";
    obj.show();
    ++obj;
    obj.show();
    
    --obj;
    obj.show();

    cout << "final value: ";
    obj.show();
    
    return 0;
}
