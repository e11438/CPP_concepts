#include <iostream>

using namespace std;

class Animal
{
    public:
    string name;
    static string type; // since this is common for all the objs explicit declaration is needed
};

string Animal::type; // should allocate memory for static data members: since this is common, no object creation will create memory for this 
// should be done in .cpp file, if done in .h file multiple definition errors might be shown

int main()
{

    Animal a;
    Animal b;
    a.name = "dog";
    a.type = "Animal";
    cout << a.name << " - "<< a.type << endl;
    cout << b.name << " - "<< b.type << endl;
    return 0;
}