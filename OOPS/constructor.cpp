#include <bits/stdc++.h>
using namespace std;
class Print
{
private:
public:
    int x, y;
    string name;
    // default constructor
    Print()
    {
        cout << "default construcotr is called" << endl;
    }
    // Parameterized Constructor
    Print(int x2, int y2)
    {
        x = x2;
        y = y2;
    }
    Print(int );//print (int x) this is also works

    // Member initialization list
    // Print(int v1, double v2) : x(v1) , y(v2){}

    // copy construtor
    Print(const Print &toBeCopied){
        cout << "calling user definfed copy construcor" << endl;
        x=toBeCopied.x;
        y=toBeCopied.y;
    }
    void print()
    {
        cout << x << " " << y << endl;
    }
    ~Print()
    {
        cout << "Destructor Called" << endl;
    }
};
Print::Print(int x){
    cout << x << endl;
}

int main()
{
    Print p;
    p.x=10;p.y=20;
    Print p1;
    p1=p;// assignement operator
    Print p2(p);//calling copy constructor
   

    
    cout << p1.x << ' ' << p1.y << endl;
    p.x=20;
    cout << p1.x << ' ' << p1.y << endl;
    cout << p.x << ' ' << p.y << endl;
}