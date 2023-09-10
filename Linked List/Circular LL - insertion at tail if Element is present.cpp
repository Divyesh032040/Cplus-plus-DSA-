//write a code for circular linked list such as if a node with X data is present (element) in 
//CLL than add new node at front of that node. it should be applicable for empty CLL too.

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
        cout<<endl;
}

int main() {

node*tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);
    
    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);


return 0;
}

//IV
