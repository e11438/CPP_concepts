#include <iostream>

using namespace std;

inline void print(string s)
{
    cout << s << endl;
}

int main()
{
    for(int i = 0; i < 1000; ++i)
    {
        print("hello world\n");
    }
    
    return 0;
}