#include <iostream>
using namespace std;

class node {

public:

int data;
node* next;

node(int data){
    this-> data = data ;
    this -> next = NULL;
}

};

void insertAtHead (node*&head , int data){
       node* n = new node(data);
       n -> next = head ;
       head = n;
}

void insertAtTail ( node* &head , int data){
        node* n = new node(data);

        if(head == NULL ){
            head = n ;
        }

       node*temp = head ;
       while(temp->next != NULL){
        temp = temp -> next ;
       }
        temp -> next = n;
        n -> next = NULL;
}

void print (node*&head) {
    node*temp = head ;
    while ( temp != NULL ){
        cout<<temp -> data <<"->";
        temp = temp -> next ;
    }
    cout<<"NULL"<<endl;
}

bool search ( node* head , int key ){
    node*temp = head;
    while(temp != NULL){
        if(temp->data == key ){
            return true ;
        }
        temp = temp -> next;
    }
     return false;
}

int main() {

node*head = NULL ;
//insert at tail 
insertAtTail(head , 10);
insertAtTail(head , 20);
insertAtTail(head , 30);
//insert at head
print(head);
insertAtHead(head , 5);
print(head);

//search 
cout<<search(head,30)<<endl;
return 0;
}

//10->20->30->NULL
//5->10->20->30->NULL
//1