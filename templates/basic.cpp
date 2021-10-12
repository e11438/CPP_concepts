#include<iostream>

using namespace std;

/*
Template is a way of letting compiler know how to write code for you
*/

class Num
{
    int x;
    int y;
    public:
    Num(int i1, int i2): x(i1), y(i2){}
    string to_string()
    {
        return std::to_string(x) + "." + std::to_string(y) ;
    }

};


template<typename T>
T getMax(T x, T y)      // different types which has ">" operator can be passed into this function 
{
    return x>y ? x : y;
}


int main()
{
    cout<< "testing templates" << endl;

    cout << getMax<int>(10, 20) << endl;
    cout << getMax<char>('x', 'a') << endl;
    cout << getMax<string>("str1", "str2") << endl;

    Num n1(3, 4);
    Num n2(4, 5);

    cout << getMax<Num>(n1, n2).to_string() << endl;

    return 0;
}