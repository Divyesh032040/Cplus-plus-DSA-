#include<iostream>
using namespace std;

class hero {
 public: 
 int health;
 char level;

//"this" keyword which stores address of current object 

hero (int health , char level ){
   cout<<"this -> "<<this <<endl;
   this -> health = health;
   this -> level = level;
}


};

int main() {

hero trevor (90 , 'A' );      

 cout<< "health and level of trevor is : "<< trevor.health <<"and"<< trevor.level << endl;



//copy Constructor 

hero Franklin (trevor);

cout<< "health of Franklin is : "<<Franklin.health<<" and "<<Franklin.level<<endl;

 

return 0;
}