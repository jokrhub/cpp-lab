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
    protected:
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

class HRA : public HR {
    protected:
        char section;

    public:
        void setSection(int s){
            section = s;
        }

        void show(){
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Exp: " << experience << endl;
            cout << "Section: " << section << endl;
        }


};

int main(int argc, char const *argv[])
{   

    HRA subManager;
    subManager.setName("hemanth");
    subManager.setId(1);
    subManager.setExperience(3);
    subManager.setSection('A');

    subManager.show();
    
    return 0;
}
