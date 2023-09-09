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

void print ( node* head ){
    node*temp = head ;
    while(temp != NULL ){
        cout<<temp -> data<<" ";
        temp = temp -> next ;
    }
    cout<<endl;
}

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


int main(){
node* node1 = new node(60);
node*head = node1 ;
insertAtHead(head , 50);
insertAtHead(head , 40);

print(head);

cout<<"length of linked list is : "<< getLength(head)<<endl;
    return 0;
}