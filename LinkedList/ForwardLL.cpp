#include<iostream>
using namespace std;

class Node{
    
public:
int data;
Node* next;

Node(int data){
    this->data = data;
    this->next = NULL;
}
};

void insert(Node* &head, int data){
    Node* temp = new Node(data);
    head->next =temp;
    head = temp;

}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){

    Node* node = new Node(10);
    Node* head=node;
    
    insert(head,89);
    insert(head,89);
    insert(head,89);
    insert(head,89);
    print(head);

return 0;
}