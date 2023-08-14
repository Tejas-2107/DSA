#include <iostream>
using namespace std;

class Test
{
    int *ptr;

public:
    Test(int x)
    {
        ptr = new int(x);
    }
    Test(const Test &t)
    {
        int val = *(t.ptr);
        ptr = new int(val);
    }
    void set(int x)
    {
        *ptr = x;
    }
    void print()
    {
        cout << *ptr << " ";
    }
};

int main()
{
    Test t1(10);
    Test t2(t1);
    t2.set(20);
    t1.print();
    t2.print();
    return 0;
}

// for static objects

#include <iostream>
using namespace std;

class point {
private:
	int x, y;

public:
 
	void d(){
	    cout << x <<" " << y << endl;
	}
	void set(int a, int b){
	    x = a;
	    y = b;
	}
};

int main(void)
{

point a;
a.set(10, 20);
point b(a);
a.d();
b.d();  
b.set(30,60);
a.d();
b.d();  
	
}
