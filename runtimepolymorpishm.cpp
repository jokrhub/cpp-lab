#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void speak(){
            cout << "Iam an animal" << endl;
        }
};

class Cow : public Animal {
    public:
        void speak(){
            cout << "Iam a cow" << endl;
        }
};


void makeAnimalSpeak(Animal* animal){
    animal->speak();
}

int main(int argc, char const *argv[])
{
    
    Animal animal;
    Cow cow;
    
    makeAnimalSpeak(&animal);
    makeAnimalSpeak(&cow);

    return 0;
}
