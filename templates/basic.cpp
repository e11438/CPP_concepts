#include<iostream>

using namespace std;


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

    return 0;
}