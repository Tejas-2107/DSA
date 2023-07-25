#include <iostream>
using namespace std;

class Player
{
public:
    static int count;
    Player() { count++; }
    ~Player() { count--; }
};

int Player ::count;

int main()
{
    cout << Player ::count << endl;
    Player p1;
    cout << Player ::count << " ";
    Player p2;
    cout << Player ::count << " ";

    return 0;
}