#include <iostream>

/*
you cant take lvalue reference from an rvalue -> int& == lvalue reference -> can't insert 10 to SetValue2 
*/


int getValue1()
{
    return 10;
}

int& getValue2()
{
    static int num = 10;
    return num;
}

void SetValue(int val)
{

}

void SetValue2(int& val)
{

}

int main()
{
    std::cout << "under sanding r values & l values" << std::endl;

    //getValue1() = 2;
    getValue2() = 2;
    //we cant assign to a lvalue

    //------------------------------end of part 1----------------------------------


    int i = 0;
    SetValue(i);
    SetValue(10);
    SetValue2(i);
    //you cant take lvalue reference from an rvalue -> int& == lvalue reference -> can't insert 10 to SetValue2 
    //------------------------------end of part 2------------------------------------

    const int & test1 = 10; //valid rvalue reference => this is just a compiler gimic, it accepts both lvalues and rvalues
    const int & test2 = i;

    //-------------------------------end of part 3------------------------------------ 


    int && b = 10;
    // correct rvalue syntax
    //-----------------------------end of part 4--------------------------------------
    
    return 0;
}