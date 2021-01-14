#include <iostream>
using namespace std;

class Test {
    private:
        int x, y;
        void privateFunc(){
            cout << "Iam a private function" << endl; 
        }

    protected:
        int a, b;
        void protectedFunc(){
            cout << "Iam a protected function" << endl; 
        }

    public:
        void getPrivate(){
            cout << "Private variables accessed using public member function: " << x << " " << y << endl;
        }

        void setPrivate(int x, int y){
            this->x = x;
            this->y = y;
        }

        void getProtected(){
            cout << "Protected variables accessed using public member function: " << a << " " << b << endl;
        }

        void setProtected(int a, int b){
            this->a = a;
            this->b = b;
        }

        void showSpecifier(){
            cout << "Calling protected function from public member function: " << ends;
            protectedFunc();
            cout << "Calling private function from public member function: " << ends;
            privateFunc();

        }
};

int main(int argc, char const *argv[])
{

    Test test;
    // test.x = 1  --> Error coz x is private 
    test.setPrivate(1, 2);
    test.setProtected(3, 4);

    test.getPrivate();
    test.getProtected();

    // test.protectedFucn() --> Error

    test.showSpecifier();

    return 0;
}
