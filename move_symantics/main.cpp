#include <iostream>
#include <string.h>

using namespace std;

class String
{
    public:
        String() = default;
        String(const char * str)
        {
            cout << "string constr " << endl;
            _size = strlen(str)+1;
            _data = new char[_size];
            memcpy(_data, str, _size);
            _data[_size] = '0';

        } 
        String (const String& str)
        {
            cout << "copy constr " << endl;
            _size = str._size;
            _data = new char[_size];
            memcpy(_data, str._data, _size);

        } 

        String(String && str)
        {
            cout << "move constr " << endl;
            _size = str._size;
            _data = str._data;

            str._data = nullptr;
        }

        ~String()
        {
            cout << "string destr" << endl;
            delete _data;
        }

        void print()
        {
            printf("%s\n", _data);
        }
    private:
        char * _data;
        size_t _size;
};

class Entity
{
    public:
        Entity(const String & name):_name(name)
        {

        }
        Entity(String && name):_name( (String && ) name)
        {

        }
        void print(){ _name.print(); }
    private:
    String _name;

};


int main()
{
    std::cout << "testing move symantics" << std::endl;
    String st("Isuru");
    Entity en(st);

    en.print();

    return 0;
}