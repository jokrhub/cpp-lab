#include <iostream>
using namespace std;

template <class T, int N>
class Vector{
   
    T array[N];

    public:
    void add(){
        cout << "Enter elements: " << endl;
        for(int i=0; i<N; i++)
            cin >> array[i];
    }

    void get(){
        cout << "\nDisplaying elements: " << endl;
        for (auto ele : array)
            cout << ele << endl;
    }
};


int main(int argc, char const *argv[])
{
    
    Vector<string, 2> v;
    v.add();
    v.get();
    return 0;
}
