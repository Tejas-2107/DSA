#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int id;

public:
    Person(string n, int i)
    {
        name = n;
        id = i;
    }
};

class Student : public Person
{
private:
    int marks;

public:
    Student(string n, int i, int m) : Person(n, i), marks(m)
    {
    }
    void print()
    {
        cout << name << " " << id << " " << marks << endl;
    };
};

int main()
{

    Student stu("Rahul", 1001, 88);
    cout << stu.name << endl;
}