#include<iostream>
using namespace std;

class Queue{
    int front,rear;
    int *arr, size;

    public:
    Queue(int s){
        front = 0;
        rear = 0;
        size = s;
        arr = new int(size);
    }
    
bool isEmpty(){
    if(front == rear){
        return true;
    }

    else{
        return false;
    }
}

void enqueue(int data){
    if(rear == size){
        cout << "Queue is full" <<endl;
    }
    else{
        arr[rear] = data;
        rear++;
    }
}

int dequeue(){
    if(front == rear){
        return -1;
    }
    else{
        int ans = arr[front];
        arr[front] = -1;
        front++;
        if(front == rear){
            front = 0;
            rear = 0;
        }
        return ans;
    }
}

int Front(){
    if(front == rear){
        return -1;
    }
    else{
        return arr[front];
    }
}


};

int main(){
    
    Queue obj(5);
    obj.enqueue(15);
    obj.enqueue(150);
    obj.enqueue(155);
    obj.enqueue(1);

    cout << obj.dequeue() <<endl;
    obj.dequeue();
    cout << obj.dequeue() <<endl;


}