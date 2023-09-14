#include <iostream> 
using namespace std;

class node{
public:
int data;
node* next;

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

void reverse (node* &head , node* &curr , node* prev){

    //base case
    if(curr == NULL){
        head = prev;
        return;
    }

    reverse(head , curr -> next , curr );
    curr -> next = prev ;
}

//recursive function 

node *reversLinkedList (node* &head){
       node*prev = NULL;
       node*curr = head;
       
       reverse ( head , curr , prev );
       return head ;

       }
    
void print (node* &head){
    node*temp = head ;
    int cp = 0;
    while(temp != NULL){
        cout<<temp-> data<<" ";
        temp = temp -> next ;
       
    }
    cout<<endl;
}

int main() {

node*node1 = new node (10);
node*tail = node1;
node*head = node1;

insertAtTail(tail,20);
insertAtTail(tail,30);
insertAtTail(tail,40);
insertAtTail(tail,50);
print(head);

node*newhead = reversLinkedList(head);
print(newhead);

return 0;
}