#include<iostream>

using namespace std;

int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}

int funcPointerAdd(int (*f)(int, int)) // function pointer as input 
{
    return f(1, 2);
}

typedef int (*mathFunc)(int, int);

mathFunc  retFunPointer2 (int t) // return function pointer with typedef
{
    if(t == 1)
        return add;
    else 
        return sub;
}

int (*retFunPointer (int t)) (int, int) // return function pointer without typedef
{
    if(t == 1)
        return add;
    else 
        return sub;
}

int main()
{
    cout << " Function pointer " << endl;
    int (*fun)(int,int) = add;
    int (*fun1)(int,int) = &add; // this will work with old compilers as well

    cout << fun1(2,3)<< endl;

    cout << funcPointerAdd(fun1) << endl; //function taking func pointer as input

    cout << retFunPointer2(1)(3,4) << endl;
    cout << retFunPointer2(2)(3,4) << endl;
    

    return 0;
}