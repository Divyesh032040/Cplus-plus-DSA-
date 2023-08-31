#include <iostream>
using namespace std;

class hero {
public: 
int health;
char level;

//parameterized Constructor 

hero (int h , char l ){
    health = h ;
    level = l ;
}

//default Constructor 

hero(){
    cout<<"Micheal calls default constructor"<<endl;
}

};

int main() {

hero trevor (90 , 'A' );     // its call parameterized constructor which carry parameters 

cout<< "health and level of trevor is : "<< trevor.health <<"and"<< trevor.level << endl;

hero Micheal ;    //its call default constructor which not carry any constructor 

return 0;
}