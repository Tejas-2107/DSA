#include <iostream>
using namespace std;

class Counter
{
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}

    // Pre-increment (++x)
    Counter &operator++()
    {
        ++value;      // increment first
        return *this; // return the same object
    }

    // Post-increment (x++)
    Counter operator++(int)
    {
        Counter *temp = this; // make copy
        ++value;              // increment original
        return *temp;         // return copy
    }

    void display() const
    {
        cout << value << endl;
    }
};

int main()
{
    Counter c(5);

    ++c;         // calls pre-increment
    c.display(); // 6

    c++;         // calls post-increment
    c.display(); // 7
}
