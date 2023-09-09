#include <iostream>
using namespace std;

class node{

public: 

int data;
node* prev;
node* next;

node(int data){
    this -> data = data;
    this -> prev = NULL;
    this -> next = NULL;
}
};

//traversing a linked list 

void print ( node* head ){
    node*temp = head ;
    while(temp != NULL ){
        cout<<temp -> data<<" ";
        temp = temp -> next ;
    }
    cout<<endl;
}

//get Length of Linked list 

int getLength (node* head ){
    int length = 0 ;
    node*temp = head ;
    while ( temp != NULL ){
        length++;
        temp = temp -> next;
    }
    return length;
}

//insert at head - doubly linked list

void insertAtHead ( node*&head , int data ){
        node* temp = new node (data);
        temp-> next = head ;
        head-> prev = temp ;
        head = temp;
}

//insert at tail - doubly linked list

void insertAtTail ( node*&tail , int data){
    if(tail == NULL){
        node*temp = new node(data);
        node*head = temp;
        tail = head;
        head = temp ;
    }
    else{
    node*temp = new node(data);
    tail -> next = temp ;
    temp -> prev = tail;
    tail = temp;
}
}

//insert new node at any position of doubly linked list 

void insertAtPosition (node*&head , node*&tail , int Position , int data){

//if position is first 

if(Position == 1 ){
    insertAtHead(head,data);
    return;
}

node*temp = head;
int cp = 0;
while(cp < Position-1){
    temp=temp->next;
    cp++;
}
//if position is last 
if( temp -> next == NULL){
    insertAtTail(tail,data);
    return;
}


node*nodeToInsert = new node (data);

nodeToInsert -> next = temp -> next ;
temp -> next -> prev = nodeToInsert ;
temp -> next = nodeToInsert;
nodeToInsert -> prev = temp;

}

int main() {

node* node1 = new node(30);
node*head = node1;
node*tail = node1; 

insertAtHead(head,20);
insertAtHead(head,10);

insertAtTail(tail,40);
insertAtTail(tail,50);

insertAtPosition(head , tail , 3 , 500 );
insertAtPosition(head , tail , 5 , 1000 );

print(head);

cout<<"Length is : "<<getLength(head)<<" ";
return 0;
}