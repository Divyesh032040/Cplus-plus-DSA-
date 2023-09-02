#include <iostream>
using namespace std;

class A {
public:

void func(){
    cout<<"single inheritance"<<endl;
}

};

class B : public A {   //class B data member can be access  functions of class A 

};

int main() {

B D ;

D.func();

return 0;
}