// C++ program to demonstrate function overriding
#include <iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Parent Constructor" << endl;
    }
    void print()
    {
        cout << "Parent Function" << endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "Child Constructor" << endl;
    }
    void print()
    {
        cout << "Child Function" << endl;
        
    }
};

int main()
{
    Child Child_Derived;
    Child_Derived.print();
    return 0;
}
