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
 
    if(tail == NULL ){
        cout<<"list is empty"<<endl;
        return;
    }



    do {
    cout << tail -> data << " " ;
    tail = tail -> next ;
}
     while ( tail != temp);
        cout<<endl;
}

//deletion in circular linked  list 

void deleteNode (node* &tail , int val ){

//if list is empty

if( tail == NULL ) {
    cout<< "ham pe to koe node he hi na... " << endl;
    return ;
 }
 //if list is non empty - any value we want delete is present in List 
 else{

        node*prev = tail;
        node*curr = prev -> next ;

        while ( curr -> data != val ){
            prev = curr ;
            curr = curr -> next ;
    }
        prev -> next = curr -> next ;

    // for one node LL
     if(curr == prev ){
        tail = prev;
     }

    if(tail == curr ){
            tail = prev;
        }
        curr -> next = NULL ;
        delete curr ;

    }
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
    
    deleteNode ( tail , 3 );
    print ( tail );
    
    deleteNode ( tail , 9 );
    print ( tail );
    
    deleteNode ( tail , 4 );
    print ( tail );

    


return 0;
}

// 3     --  O/P
// 3 5 
// 3 5 7 
// 3 5 7 9 
// 3 5 6 7 9 
// 3 5 6 7 9 10 
// 3 4 5 6 7 9 10 
// memory free for node with this 3
// 10 4 5 6 7 9 
// memory free for node with this 9
// 10 4 5 6 7 
// memory free for node with this 4
// 10 5 6 7 
//IV