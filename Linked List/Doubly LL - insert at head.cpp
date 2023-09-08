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

void insertAtHead ( node*&head , int data ){
        node* temp = new node (data);
        temp-> next = head ;
        head-> prev = temp ;
        head = temp;
}

int main() {

node* node1 = new node(30);
node*head = node1;

insertAtHead(head,20);
insertAtHead(head,10);


print(head);

cout<<"Length is : "<<getLength(head)<<" ";
return 0;
}