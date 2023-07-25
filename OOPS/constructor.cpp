#include<bits/stdc++.h>
using namespace std;
class Print{
    private:
    
    public:
    int x, y;
    Print(int x2, int y2){
        x = x2;
        y = y2;
    }
    void print(){
        cout << x << " " << y << endl;
    }
    ~Print(){
        cout << "Destructor Called" << endl;
    }
};
int main(){
    Print p1(10,20);
    Print p2(p1);
    p1.x = 30;
    p1.print();
    p2.print();
}