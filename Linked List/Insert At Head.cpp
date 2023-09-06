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
 
void print(node* &head) {
    node* temp = head; // Start from the head of the list
    
    while (temp != NULL) { // Keep going until we reach the end of the list
        cout << temp->data << " "; // Print the data of the current node
        temp = temp->next; // Move to the next node
    }
    
    cout << endl; // Print a newline to separate the output
}

int main() {

//insertion

//create a new node 
node* node1 = new node(12);
node* head = node1;
print(head);

insertAtHead(head ,11);
print(head);
insertAtHead(head ,10);
print(head);
insertAtHead(head ,9);
print(head);
insertAtHead(head ,8);
print(head);
insertAtHead(head ,7);
print(head);


return 0;
}