#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void insert(int element)
    {
        if (top > size)
        {
            cout << "Stack is overflow" << endl;
        }
        else
        {
            ++top;
            arr[top] = element;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is underflow" << endl;
        }
        else
        {
            top--;
        }
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Stack st(5);
    st.insert(10);
    st.insert(30);
    st.insert(20);
    st.insert(20);
    st.insert(20);
    st.insert(20);

    cout << st.peek() << endl;
    cout << st.isEmpty() << endl;

    return 0;
}