#include<bits/stdc++.h>
using namespace std;

void reverse(queue<int>&q){
    if(q.empty()){
        return;
    }
    int f = q.front();
    q.pop();
    reverse(q);
    q.push(f);
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "After reverse:" << endl;
    reverse(q);
    while(!q.empty()){
        cout << q.front() <<" ";
        q.pop();
    }
}