
//insert node at head , tail and at position 

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

void insertAtHead( node* &head , int data ){
    //create a new node
    node* temp = new node (data);
    temp -> next = head ;
    head = temp ;

}

void insertAtTail ( node* &tail , int data){
    //creating a new node 
    node*temp = new node(data);
    tail -> next =  temp ; 
    tail = temp;
}


void InsertAtPosition( node* &tail , node*&head , int Position , int data ){
    //with this condition we can put insert at head..in case of insert at Position 
    if(Position == 1 ){
        insertAtHead(head , data);
        return;
    }

    //creating pointer for traversing 
    node* temp = head;
    int cp = 1;   //at starting we are at 1st position 
    while( cp < Position - 1  ){
    temp = temp -> next ;    //temp ne aagad vadharta gya 
    cp++;
    }

    //inserting at last Position

    if( temp -> next == NULL ){
        insertAtTail(tail , data);
        return;
    } 


    //now this 2 lines are important - 
    //create a new node for insert 
    node* nodeToInsert = new node(data);
    //put next of new node to its next node which address stored in temp next.
    nodeToInsert -> next = temp -> next ;

    //put next of temp node to new node which we have to insert. 
    temp -> next = nodeToInsert ;
    
}

 
void print(node* &head) {
    node* temp = head; 
    
    while (temp != NULL) { 
        cout << temp->data << " "; 
        temp = temp->next; 
    }
    
    cout << endl; 
}

int main() {

//create a first new node 
node* node1 = new node(50);
node* head = node1;
node* tail = node1;
print(head);

//inserting at tail
insertAtHead(head ,40); 
print(head);
insertAtHead(head ,30);
print(head);

//inserting at head 
insertAtTail(tail ,70);
print(head);

insertAtTail(tail ,80);
print(head);

//inserting at Position
InsertAtPosition (tail ,head, 4, 60); 
print(head);

//inserting at 1st position

InsertAtPosition (tail ,head, 1, 20 ); 
print(head);

//insert at last position 

InsertAtPosition (tail ,head, 8 , 90 ); 
print(head);

cout<<endl;

cout<< "Head is "<< head -> data << endl;
cout<< "Tail is "<< tail -> data << endl;


return 0;
}

