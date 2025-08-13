class Demo
{
    int value;

public:
    Demo(int v) : value(v) {}

    int &getValue()
    { // non-const version
        cout << "Non-const version called\n";
        return value;
    }

    int getValue() const
    { // const version
        cout << "Const version called\n";
        return value;
    }
};
int main() {
    Demo d1(10);
    const Demo d2(20);

    d1.getValue() = 50;  // ✅ non-const version called
    // if we remove & from above function then above line gives an error
    cout << d2.getValue() << endl; // ✅ const version called
}
