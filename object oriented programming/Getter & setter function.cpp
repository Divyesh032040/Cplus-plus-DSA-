#include<iostream> 
using namespace std;

//class hero 
class hero{

int health = 90 ;       //private  

public: 
char level = 'A';      //public

//getter function 
int getHealth(){
    return health;
}

//setter function 
int setHealth(int h){
   health = h;
}

};

int main() {
//object 
hero trevor ; 

cout<<"level of trevor is "<< trevor.level <<endl;
cout<<"initial level of trevor is "<< trevor.getHealth() <<endl;
trevor.setHealth(50);
cout<<"after set new level of trevor is "<<trevor.getHealth()<<endl;
trevor.setHealth(0);
cout<<"again set new health of trevor is : "<<trevor.getHealth()<<endl;

return 0;
}