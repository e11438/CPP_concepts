#include <iostream>

using namespace std;

enum MONTH {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

class Person
{
private:
    mutable int bDate;
    MONTH bMonth;
    int bYear;

public:
    Person():bDate(0), bMonth(DEC), bYear(1992){}

    int getBDate() const 
    {
        if(bDate < 1)
            bDate = 1;  //since this is a const member function we can't update value of bDate unless it is a mutable variable
        return bDate;
    }
};

int main()
{
    Person p;
    cout << " person age " << p.getBDate() << endl;
    return 0;
}