#include <iostream>
using namespace std;

class A{
    int a, b;
    public:
        A(int x, int y) : a(x), b(y) {}
        void show(){
            cout << "values: " << a << " " << b << endl;
        }
};

int main(int argc, char const *argv[])
{
    
    A* obj_pointer;
    obj_pointer = new A(10, 20);
    obj_pointer->show();
    return 0;
}
