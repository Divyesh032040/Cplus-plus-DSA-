#include <iostream>
using namespace std;

class hero{

int health = 70 ;

public: 

char level = 'A';

int getHealth(){    //getter function
    return health;
}

void setHealth(int h){  //setter function
    health = h;
}

};

int main() {

//static memory allocation

hero cj;

cout<<"level of cj is : "<<cj.level<<endl;
cout<<"health is : "<<cj.getHealth()<<endl;

//dynamically memory allocation 

hero *trevor = new hero; 

cout<<"level of trevor is : "<<(*trevor).level<<endl;
cout<<"health of trevor is : "<<(*trevor).getHealth()<<endl;

return 0;
}