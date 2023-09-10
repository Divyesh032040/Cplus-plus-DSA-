//write a code for circular linked list such as if a node with X data is present (element) in 
//CLL than add new node at front of that node. it should be applicable for empty CLL too.

#include <iostream>
using namespace std;

class node {

public:

int data;
node*next;

//constructor
node(int data){
    this-> data = data ;
    this-> next = NULL ;
}

//destructor 
~node(){
    int val = this -> data;
    if( next != NULL ){
        delete next;
        next = NULL ;
    }
    cout<<"memory free for node with this "<< val << endl;
}
};

void insertNode ( node*& tail , int element , int data ){
            
        //if node is empty 
        if ( tail == NULL ){
            node*temp = new node(data);
            tail = temp ;
            temp -> next = temp ;
        }

        //if node is non empty , means element is present in list 
        
        else { 
            node* curr = tail;
            while ( curr -> data != element ){
                curr = curr -> next;
            }
        //element found and curr is representing element with node 
            node* temp = new node(data);
            temp -> next = curr -> next;
            curr -> next = temp;
        }
}

void print (node*tail){
     node*temp = tail;
    do {
    cout << tail -> data << " " ;
    tail = tail -> next ;
}
     while ( tail != temp);
        
}


int main() {

node*tail = NULL;

//insert in empty list - element is not in list 

insertNode(tail , NULL , 10 );  //in CLL tail is empty , set node with data 10

insertNode(tail , 10 , 20 );   //in CLL if element 10 is present than add new node with data 20 

insertNode(tail , 20 , 30 );  //in CLL if element 20 is present than add new node with data 30
print (tail);

return 0;
}

//IV