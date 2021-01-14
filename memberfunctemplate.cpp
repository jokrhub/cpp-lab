#include <iostream>
using namespace std;


class Test {
    public:

        template <class T1, class T2>
        void show(T1 first, T2 second){
            cout << "Generic Addition: " << first << " " << second << endl;
        }
};

int main(int argc, char const *argv[])
{
    
    Test t;
    
    t.show(1, 2.665);
    t.show('A', 'B');
    t.show("ad", "adw");
    
    return 0;
}
