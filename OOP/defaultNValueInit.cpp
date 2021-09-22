#include <iostream>

using namespace std;

struct Number
{
    int first;
    bool safe;
};

class BigInt
{
    public:
        int num;
        bool safe;
};

/*
Different types of object initializations

default initialization
value initialization
copy initialization

should able to understand compiler output to see why

*/




int main()
{
    Number n1;
    Number* n2 = new Number; 
    Number* n3 = new Number();
    //Number n4(); this is treated as a function definition

    BigInt bi1;
    BigInt* bi2 = new BigInt;
    BigInt* bi3 = new BigInt();

    cout << n1.first << " " << n1.safe << endl;
    //cout << n4.first << " " << n4.safe << endl;
    cout << n2->first << " " << n2->safe << endl;
    cout << n3->first << " " << n3->safe << endl;

    cout << bi1.num << " " << bi1.safe << endl;
    cout << bi2->num << " " << bi2->safe << endl;
    cout << bi3->num << " " << bi3->safe << endl;

    return 0;
}