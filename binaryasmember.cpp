#include <iostream>
using namespace std;

class Str{
    string s;
    public:
        Str() : s("") {
        }

        Str operator+(const Str& s_end){
            Str temp;
            temp.s = s + " " + s_end.s; 
            return temp;
        }

        void get(){
            cout << "Enter string: ";
            cin >> s;
        }
        void show(){
            cout << "string value: " << s << endl;
        }
};

int main(int argc, char const *argv[])
{
    Str string1, string2, string3;

    string1.get();
    string2.get();

    string3 = string1+string2;

    string3.show();

    return 0;
}
