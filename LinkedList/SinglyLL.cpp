#include<iostream>
using namespace std;

class Linklist
{ 
public:
int data;
Linklist* next;

//constructor
Linklist(int data){
    this->data = data;
    this->next = NULL;
}

//destructor
~Linklist(){
    int valus = this->data;
    if(this->next != NULL){
        delete next;
        this->next = NULL;
    }
}
 
};

//insert backward
void insert(Linklist* &head, int d){

    Linklist* node = new  Linklist(d);
    node->next = head;
    head = node;

}

//insert forward
void insertTail(Linklist* &tail, int d){
    Linklist* temp = new Linklist(d);
    tail->next = temp;
    tail = tail->next;

}

//insert at particular possition
void inserAtPos(Linklist* &tail, int d, int pose){

Linklist* temp = tail;
int count =1;
while(count < pose-1){
    temp = temp->next;
    count++;
}

Linklist* nodeToInsert = new Linklist(10);
nodeToInsert->next = temp->next;
temp->next = nodeToInsert;

}

//insert at head
void inserATHead(Linklist* &tail, int data){
  Linklist* temp =new Linklist(data);
  temp->next = tail;
 tail=temp;

}

//delete
void deleteNode(Linklist* &tail, int pos){

if(pos == 1){
  Linklist *temp = tail;
    tail = tail->next;
    temp->next = NULL;
    delete  temp;
}

else{
  Linklist* cuurent =tail;
  Linklist* prev = NULL;
    int cnt = 1;
    while(cnt < pos){
        prev = cuurent;
        cuurent = cuurent->next;
        ++cnt;
    }

    prev->next = cuurent->next;
    cuurent->next = NULL;
    delete cuurent;

}
}

//print
void print(Linklist* &tail){

Linklist* temp = tail;
while(temp != NULL){

    cout<< "size"<< sizeof(temp) <<endl;
    cout<< temp->data <<endl;
    temp = temp->next;
}
}


int main(){

Linklist* node1 = new Linklist(10);
Linklist* tail = node1;
 
int number = 217;

while(number){
    int digit = number%10;
    number /= 10;
    Linklist* temp = new Linklist(digit);
    tail->next = temp;
    tail = temp;
}
node1 = node1->next;
while(node1){
    cout <<" nodeData: ";
    cout << node1->data <<" ";
    node1 = node1->next;
}

// insert(tail, 95);
// insert(tail, 90);
// insert(tail, 11);
// inserATHead(tail,900);
// insert(tail, 1);
// inserAtPos(tail,3,3);
// // print(tail);
// deleteNode(tail,1);

// print(node1);


}