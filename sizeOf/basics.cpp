#include<iostream>

using namespace std;

class Node
{
    char x;
    int y;
    char z;
};

class Node1
{
    char x;
    char y;
    short z;
};

class List : public Node
{
    short num;
};
class List1 : public Node1
{
    short num;
};

int main()
{

    cout << "size of Node " << sizeof(Node) << endl; 
    cout << "size of Node1 " << sizeof(Node1) << endl; 
    cout << "size of List " << sizeof(List) << endl; 
    cout << "size of List1 " << sizeof(List1) << endl; 

    List1 l;
    Node1 n = l;

    cout << "size of l " << sizeof(l) << endl; 
    cout << "size of n " << sizeof(n) << endl; 

    return 0;
}