#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass() { cout << "MyClass constructor called\n"; }
    ~MyClass() { cout << "MyClass destructor called\n"; }
};

//MyClass globalObj; // Global static object
void printCount(){
    static int counter = 0;

    cout << ++counter << endl;
}
int main()
{
    cout << "Inside main\n";
    printCount();
    printCount();
    printCount();
    printCount();
    return 0;
}



