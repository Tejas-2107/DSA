#include <bits/stdc++.h>
using namespace std;
int *getDanglingPointer()
{
    int localVar = 42;
    // Returning the address of a local variable
    return &localVar;
}

int main()
{
    int *danglingPtr = getDanglingPointer();
    // Undefined behavior
    printf("Value of dangling pointer: %d\n", *danglingPtr);
    return 0;
}