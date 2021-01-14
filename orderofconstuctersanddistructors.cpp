
#include <iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"A's Constructor"<<endl;
		}
		~A()
		{
			cout<<"A's Destructor"<<endl;
		}
};
class B : A
{
	public:
		B()
		{
			cout<<"B's Constructor"<<endl;
		}
		~B()
		{
			cout<<"B's Destructor"<<endl;
		}
};
class C : B
{
	public:
		C()
		{
			cout<<"C's Constructor"<<endl;
		}
		~C()
		{
			cout<<"C's Destructor"<<endl;
		}
};
int main()
{
	C c;
	return 0;
}

// Below code is for order of execition of constructer and destructers in nested classes


// #include <iostream>
// using namespace std;

// class Outside {

//     public:
//     Outside(){
//         cout << "Outside Constructer" << endl;


//         class Inside {
//             public:
//                 Inside(){
//                     cout << "Inside Constructer" << endl;
//                 }
//                 ~Inside(){
//                     cout << "Inside Destructer" << endl;
//                 }
//         }i;

//     }

//     ~Outside(){
//         cout << "Outside Desstructer" << endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Outside out;
//     return 0;
// }
