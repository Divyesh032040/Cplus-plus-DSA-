#include <iostream>
using namespace std;

class node{

public: 

int data;
node* prev;
node* next;

//constructor
node(int data){
    this -> data = data;
    this -> prev = NULL;
    this -> next = NULL;
}

//destructor

~node() {
     int data = this -> data;
     if(next != NULL){
        delete next;
        next = NULL;
     }
     cout<<"memory free for node with data : "<<data<<endl;
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


//insert at head func 

void insertAtHead ( node*&head , int data ){
        node* temp = new node (data);
        temp-> next = head ;
        head-> prev = temp ;
        head = temp;
}

//deletion of node in DLL

void deleteNode ( int Position , node* &head){

//deletion of first / starting node of DLL
    if (Position == 1 ) {
         node*temp = head;
         temp -> next -> prev = NULL ;
         head = temp -> next;
         temp -> next = NULL;
         delete temp;
    }
else {
//delete any middle node or last node 

node* curr = head ;
node* prev = NULL ;

int cp = 1;
while(cp < Position){
    prev = curr ;
    curr = curr -> next ;
    cp++;
}
    
    curr -> prev = NULL;
    prev -> next = curr -> next;
    curr -> next = NULL;

    delete curr ;  
    
   }
}

int main() {

node* node1 = new node(30);
node*head = node1;

insertAtHead(head,20);
insertAtHead(head,10);


print(head);

deleteNode(2,head);

print(head);

return 0;
}

// 10 20 30 
// memory free for node with data : 20
// 10 30 

