#include<iostream>


using namespace std;

class Human
{
    private:
    string name;
    int age; // if this needs to be changed from a const function, mutable keyword should be used.
    int ageExpect;

    public:
    Human():name("no name"), age(0),ageExpect(50){}
    const string getName() const
    {
        return name;
    }

    const int * const getAge ()const
    {
        return &age;
    }

    int * const getAgeExpect() const 
    {
        return (int *)&ageExpect;
    }
};

void getNameofObj(const Human & h)
{
    cout << h.getName()<< endl; // this works fine only of getName is Guaranteed not to modify class members because h is const
}


int main()
{
    const int MAX = 1000; // const variable

    const int * a = new int; // content is constatnt, we can't do (*a = 2)
    int * const b = new int; // pointer is constant, we cant change pointer 
    
    Human h;

    string name  = h.getName();
    name = "isuru";

    int * ae = h.getAgeExpect();
    *ae = 45;

    const int * age = h.getAge();
    age = &MAX;

    cout << "hello world " << name << " age expectancy " << *h.getAgeExpect() << "curr age " << *h.getAge() << endl;
    return 0;
}