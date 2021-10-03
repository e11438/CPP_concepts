#include<iostream>

using namespace std;

struct Position
{
    float x, y;
    Position(float x, float y):x(x), y(y)
    {

    }

    Position add(const Position & p) const
    {
        return Position(x + p.x, y + p.y);
    }

    string to_string()
    {
        return std::to_string(x) + " " + std::to_string(y); // std  must be used because of namespace confusion
    }

    Position operator+(const Position & p) const
    {
        return Position(x + p.x, y + p.y);
    }

};

std::ostream& operator << (std::ostream & s, const Position & p)   
{
    s << p.x << " - " << p.y << endl;
    return s;
}


int main()
{
    cout << "Operator overloading basics" << endl;

    Position p1(2.0f, 3.0f);
    Position p2(3.0f, 4.0f);

    Position p3 = p1.add(p2);
    Position p4 = p1 + p2;


    cout << p3.to_string() << endl;
    cout << p4.to_string() << endl;

    cout << p4 << endl;

    return 0;
}