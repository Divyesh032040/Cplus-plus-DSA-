#include <iostream> 
using namespace std;

//our node id user defined 

class node{

public:   
int data ;
node* next;

node(int val){
    data = val;
    next = NULL;
}
};

// insert node at head 

void insertNodeAtHead (node* &head , int val ){
    node* n=new node(val);
    n -> next = head ;
    head = n ;
}


//inserting new note at tail 

void insertAtTail(node* &head , int val ){
node*n=new node(val);

if(head==NULL){
    head = n;
    return ;
}

node* temp = head;
while(temp->next!=NULL){
    temp = temp -> next;
}

temp -> next = n; 

}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<< " -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

//searching node 

bool search (node* head , int key ){

    node* temp = head;
    while(temp!=NULL){
        if(temp -> data == key){
            return true;
        }
        temp = temp -> next; 
    }
    return false;
}


int main(){

//inserting at tail

node* head = NULL;
insertAtTail(head , 1 );
insertAtTail(head , 2 );
insertAtTail(head , 3 );
display(head);

//inserting at head

insertNodeAtHead(head , 4);
display(head);

//searching 

cout<<search(head , 3 )<<endl;

return 0;
}


