#include <iostream>
using namespace std; 

class A {
public:
void function1(){
    cout<<" class A member "<<endl;
}
};

class B {
public:

void function2(){
    cout<<"class B member "<<endl;
}
};

class C : public A , public B {

public:

void function3(){
    cout<<"class C member "<<endl;
}


};
int main() {

C obj1 ;  // class c inherited from class A and B both 

obj1.function1();
obj1.function2();
obj1.function3();


return 0;
}