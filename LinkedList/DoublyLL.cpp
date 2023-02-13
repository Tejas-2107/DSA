#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;
    Node (int d){
        this->data = d;
        this->prev = NULL;
        this->next =NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp !=NULL){
        cout<< temp->data << " " ;
        temp= temp->next;
    }
    cout<< endl;
}
//<<<-
void insertAtHead(Node* &head, int data){
Node* temp = new Node(data);
temp->next = head;
head->prev = temp;
head = temp;

}//-> ->
void insertATTail(Node* &tail, int data){
    Node* temp = new Node(data);
   tail->next = temp;
    temp->prev = tail;
   tail =temp;
}

//particular 
void insertAtspecific(Node* &head, Node* &tail, int pos, int data){
   
   if(pos==1){
    insertAtHead(head, data);
    return;
   }
   
   
     int cnt =1;
        Node* temp = head;
    while(cnt < pos-1){
   
temp = temp->next;
cnt++;
    }
    if(temp->next==NULL){
        insertATTail(tail, data);
        return ;
    }
 Node* nodeToinsert = new Node(data);
 nodeToinsert->next = temp->next;
 temp->next->prev = nodeToinsert;
 temp->next = nodeToinsert;
 nodeToinsert->prev = temp;
 
  


}

int main(){

Node* head = new Node(10);
Node* tail =head;

insertAtHead(head, 90);
insertAtHead(head, 908);
insertAtHead(head, 990);
insertAtHead(head, 190);
insertATTail(tail,97);
insertAtHead(head, 1);
insertAtspecific(head, tail, 3,100);4
print(head);


}