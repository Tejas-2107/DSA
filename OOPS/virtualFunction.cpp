#include <bits/stdc++.h>
using namespace std;
class Base{
    public:
    // Base(){
    //     cout << "Base Constructor Called" << endl;
    // }
    virtual void print(){
        cout << "Base" << endl;
    }
};

class Derived: public Base{
    public:
    // Derived(){
    //     cout << "Derived Constructor Called" << endl;
    // }
    void print(){
        cout << "Derived" << endl;
    }
};

int main(){
    Derived d;
    // Base *b = &d;
    Base *b = new Derived();
    b->print();
}