#include <iostream>
using namespace std;

class A
{
    public:
    int x = 0;
    A()
    {
        cout << "A constructor called" << endl;
    }
};
class B : virtual public A
{  
    public:
    B()
    {
        cout << "B constructor called" << endl;
    }
};
class C : virtual public A
{
    public:
    C()
    {
        cout << "C constructor called" << endl;
    }
};
class D : public B, public C
{
};

int main()
{
    D d;
    // cout << d.x;
    return 0;
}