#include <iostream>

using namespace std;

class Animal
{
    protected:
        string name;
        string sound;
        int legCount;

    public:
        Animal():name("Animal"),sound("none"),legCount(0)
        {
            cout << "Creating animal "<< endl;
        }
        ~Animal()
        {
            cout << "Destroying Animal " << endl;
        }
        virtual void makeSound()
        {
            cout << sound << endl;
        }
};

class Bird: public Animal
{

    public:
    Bird()
    {
        sound = "kwak kwaak";
        cout << "creating bird" << endl;
    }
    ~Bird()
    {
        cout << "destroying bird" << endl;
    }

};

int main()
{

    Bird b;
    b.makeSound();
    return 0;
}
