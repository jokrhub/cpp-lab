#include <iostream>
using namespace std;

class A{
    int a, b;
    public:
        void get(){
            cout << "Enter numbers: ";
            cin >> a >> b;
        }

        void show(){
            cout << "Numbers: " << a << " " << b << endl; 
        }

        void operator=(const A& obj){
            a = obj.a;
            b = obj.b;
        }

};

int main(int argc, char const *argv[])
{

    A obj1, obj2;

    obj1.get();

    obj2 = obj1;

    cout << "Numbers of second object" << endl;
    obj2.show();

    
    return 0;
}
