#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try{
        if (b==0)
            throw 0;
        cout << "Division: " << a/b << endl;
    }
    catch(int x){
        cout << "Cant divide by Zero" << endl;
    }



    return 0;
}
