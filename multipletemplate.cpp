#include <iostream>
using namespace std;

template <class T1, class T2>
class Table {
    T1 a;
    T2 b;

    public:
    Table(T1 x, T2 y){
        a = x;
        b = y;
    }

    void show(){
        cout << a << " " << b << endl;
    }
};

int main(int argc, char const *argv[])
{
    
    Table<int, string> table1(10, "baa");
    Table<float, char> table2(10.23, 'B');

    table1.show();
    table2.show();
    return 0;
}
