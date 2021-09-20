#include <iostream>
#include <memory>

using namespace std;

//unique pointer - when going out of scope it will delete automatically => can't copy
//shared pointer - maintaining a reference count => when copy refCount++, when deleted refCount--, if(refCount==0) pointer will be deleted 
//weak pointer - similar to share pointer , but refCount not maintained

class Animal
{
    private:
        string name;

    public:
        Animal():name("No name")
        {
            cout << "Default animal created " << name << endl;
        }
        Animal(string name):name(name){
            cout << "Animal created " << name << endl;
        }
        ~Animal(){
            cout << "Animal destroyed " << name << endl;
        }
        void printName()
        {
            cout << name << endl;
        }

};

void printName(shared_ptr<Animal> a)
{
    a->printName();
}

int main()
{
    shared_ptr<Animal> g_sa1;
    weak_ptr<Animal> g_wa1;

    {
        unique_ptr<Animal> a(new Animal("RAT")); //Constructor is explicit 
        unique_ptr<int> newInt = make_unique<int>(23); // Prefered way - exception safety
        cout << "Integer value "<< *newInt << endl;

        shared_ptr<Animal> sa1 = make_shared<Animal>("CAT");
        shared_ptr<Animal> sa2(new Animal("DOG"));
        g_sa1 = sa2;
        g_wa1 = sa1;

        printName(sa1);

    }
    cout << "Out of the scope " << endl;
    return 0;
}