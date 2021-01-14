#include <iostream>
using namespace std;

class Employ{
    protected:
        string name;
        int id;
    public:
        void setName(string n){
            name = n;
        }
        void setId(int i){
            id = i;
        }

        void show(){
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
        }
};

class HR : public Employ {
    int experience;

    public:
        void setExperience(int e){
            experience = e;
        }

        void show(){
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Exp: " << experience << endl;
        }
};

int main(int argc, char const *argv[])
{   

    HR manager;
    manager.setName("hemanth");
    manager.setId(1);
    manager.setExperience(3);

    manager.show();
    
    return 0;
}
