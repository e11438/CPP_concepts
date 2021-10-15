#include<iostream>


using namespace std;

void inc()
{
    static int i = 0;   //This is similar to declare global value and increment. But this can't be modified from else where
    /*space is allocated for lifetime of the programm but scope is limited to function
    so memory allocated only once and value update tin the previous function call is carried out to next call
    check https://www.geeksforgeeks.org/coroutines-in-c-cpp/ for more interesting uses
    */
    i++;
    cout << "inc func " << i << endl;
}

int main()
{
    cout << "testing local static" <<endl;
    for(int i = 0; i < 5; i++)
        inc();
    return 0;
}