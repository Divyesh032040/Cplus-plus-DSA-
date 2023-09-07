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

// void insertAtHead( node* &head , int data ){
//     //create a new node
//     node* temp = new node (data);
//     temp -> next = head ;
//     head = temp ;

// }

void insertAtTail ( node* &tail , int data){
    node*temp = new node(data);
    tail -> next =  temp ; 
    tail = temp;
}

// void insertAtTail ( node* &tail , int data){
//     //creating a new node 
//     node*temp = new node(data);
//     //now we change the "next" pointer of tail / node1 from NULL to temp node ( new node ) 
//     tail -> next =  temp ; 
//     //and than we changing the name "tail" from first node (node1=heaad=tail) to new connected node (temp/node2) 
//     tail = temp;
//     //her we connect out new temp node with node1. 
// }
 
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
node* node1 = new node(10);
node* head = node1;
node* tail = node1;
print(head);

insertAtTail(tail ,20);
print(head);

insertAtTail(tail ,30);
print(head);

insertAtTail(tail ,40);
print(head);

// insertAtHead(head ,20); 
// print(head);
// insertAtHead(head ,30);
// print(head);

return 0;
}

//   output : 10 
//            10 20 
//            10 20 30 
//            10 20 30 40 
