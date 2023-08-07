#include <iostream>
using namespace std;

class Base
{
public:
    // pure virtual function
    virtual void show() = 0;
};

class Derived : public Base
{
public:
    // implementation of the pure virtual function
    void show() { cout << "In Derived \n"; }
};

int main(void)
{
    // creating a pointer of type
    // Base pointing to an object
    // of type Derived
    Base *bp = new Derived();
    bp->show();

    return 0;
}