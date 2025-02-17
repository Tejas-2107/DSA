#include <iostream>
using namespace std;

class Player
{
private:
    static inline int count=0;//inline declaration and inintialization of static variables from c++17 onwards

public:
   static int rn;
   static int m;
    Player() { count++; }
    void printCount()
    {
        cout << count << endl;
    }
    static int getM(){
        return m;// static functions only access static data members 
    }
    ~Player() { count--; }
};
// alaways define outside of the class
int Player::rn=0;
int Player::m=0;

int main()
{
    cout << Player ::getM() << endl;
    // Player p1;
    // p1.printCount();
    // ;
    // Player p2;
    // p2.printCount();

    return 0;
}