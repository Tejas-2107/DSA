#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    int id;
    string name;
    string collegeName = "PCCOE";
    Person(int id, string name) : id(id), name(name)
    {
    }
    void print()
    {
        cout << id << " " << name << endl;
    }
};
class Student : public Person
{
public:
    string division;
    Student(string division, int id, string name) : division(division),
                                                    Person(id, name){};
    void print()
    {
        this->Person::print();
        cout << division << endl;
    }
};
int main()
{
    Student s1("A", 21, "tejas");
    s1.print();
}
