#include <iostream>
using namespace std;

void checkIfPostive(int x){
    try{
        if(x<0)
            throw -1;
        else 
            cout << "Check Passed" << endl;
    }
    catch(int c){
        throw;
    }
    
}

int main(int argc, char const *argv[])
{
    int n = -45;
    
    try {
        checkIfPostive(n);
    }
    catch(int c){
        cout << "Error! Number is negetive" << endl;
    }

    return 0;
}