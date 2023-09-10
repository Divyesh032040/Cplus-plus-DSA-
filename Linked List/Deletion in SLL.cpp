#include <iostream>
using namespace std;

class node{

public:
int data;
node *next;

//constructor 

node(int data){
    this -> data = data;
    this -> next = NULL;
}

};



void insertAtTail ( node* &tail , int data){
    //creating a new node 
    node*temp = new node(data);
    tail -> next =  temp ; 
    tail = temp;
}
 
void print(node* &head) {
    node* temp = head; 
    
    while (temp != NULL) { 
        cout << temp->data << " "; 
        temp = temp->next; 
    }
    
    cout << endl; 
}

//deletion in singly linked list 

//delete first / starting node

void deleteAtHead (node*&head){
    node*nodeToDelete = head;
    head = head -> next;
    delete nodeToDelete ;
}

//delete any node of sll

void deletion (node* &head , int val ){
    //check for if linked list is empty 
    if(head == NULL ){
        return;
    }

    //check for if linked list has only one node 
    if(head -> next == NULL ){
        deleteAtHead(head) ;
        return ;
    }
    
    //delete any between nodes by pass value/data of node 

    node* temp = head;
    //set temp pointer to position-1 node
    while(temp -> next -> data != val ){
        temp = temp -> next;        
    }
    node*nodeToDelete = temp -> next ;
    temp -> next = temp -> next -> next ;
    
    
    delete nodeToDelete ;
    
    
}

int main() {

//create a first new node 
node* node1 = new node(10);
node* head = node1;
node* tail = node1;

insertAtTail(tail ,20);

insertAtTail(tail ,30);

insertAtTail(tail ,40);

insertAtTail(tail ,50);

print (head);

deleteAtHead(head); //delete first node 

print(head);

deletion(head , 40); //delete between node 

print(head);

deletion(head , 50);

print(head);

return 0;
}

// 10 20 30 40 50 
// 20 30 40 50 
// 20 30 50 
// 20 30 

