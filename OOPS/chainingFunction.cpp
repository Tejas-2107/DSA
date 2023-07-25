#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Point &setX(int x)
    {
        this->x = x;
        return *this;
    }
    Point &setY(int y)
    {
        this->y = y;
        return *this;
    }
    void print(){
        cout << x <<" " << y << endl;
    }
};

int main()
{
    Point p1(10, 10);
    p1.setX(5).setY(5);
    p1.print();
    return 0;
}