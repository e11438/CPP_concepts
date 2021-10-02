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
        virtual void makeSound()    //If this function is not overridden in chiled class, Base class func will be called
        {
            cout << "making sound in Animal " << sound << endl;
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

    virtual void makeSound()    //If this function is not overridden in chiled class, Base class func will be called
    {
        cout << "making sound in Bird " << sound << endl;
        Animal::makeSound();
    }


};

int main()
{

    Bird b;
    b.makeSound();
    return 0;
}
