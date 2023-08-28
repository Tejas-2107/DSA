#include <bits/stdc++.h>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size = 0;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insertIntoHeap(int data)
    {
        size = size + 1;
        int index = size;
        arr[index] = data;
        while (index >= 1)
        {
            int parentIndex = index / 2;
            if (arr[parentIndex] < arr[index])
            {
                swap(arr[parentIndex], arr[index]);
                index = parentIndex;
            }
            else
            {
                return;
            }
        }
    }

    void printHeap()
    {
        for (int i = 1; i <= size; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Heap h;
    h.insertIntoHeap(50);
    h.insertIntoHeap(55);
    h.insertIntoHeap(53);
    h.insertIntoHeap(52);
    h.insertIntoHeap(54);
    h.printHeap();
}