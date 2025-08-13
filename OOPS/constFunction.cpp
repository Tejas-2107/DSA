// Constant member functions are those functions that are denied permission to change the values of the data members of their class.To make a member function constant, the keyword const is appended to the function prototype and also to the function definition header.

// C++ program to illustrate how to handle null pointer.
#include <iostream>
#include <math.h>
using namespace std;

class Student
{
private:
    static int h;
    int roll=0;
    mutable int counter=0;
    const int pi=3.14;
public:
    Student(){
        ++h;
        roll=h;
    }
    void print(){
        cout << roll << endl;
    }
    int getCounter ()const{
        ++counter;// runs fine becasue counter declared as mutable
        return counter;
    }
    int getRollNum() const
    {
        return roll;
    }
    //throw an error 
    // int getRollNum() const
    // {
    //     ++roll;
    //     return roll;
    // }
};
int Student::h = 0;

int main()
{
     
    Student s;
    const Student s1;
    //cout << s1.print() << endl; throw an error
    cout << s.getRollNum()<<endl;
    cout << s1.getRollNum() << endl;
    return 0;
}