#include <iostream>
using namespace std; 

class A {
public:
void function1(){
    cout<<"class A member "<<endl;
}
};

class B : public A {
public:

void function2(){
    cout<<"class B member "<<endl;
}
};

class C :public B {

public:

void function3(){
    cout<<"class C member "<<endl;
}


};
int main() {

cout<<"class c inheritence from A and B both "<<endl;

C obj1 ;

obj1.function3();
obj1.function2();
obj1.function1();

cout<<"class B inheritence from class A "<<endl;

B obj2;

obj2.function2();
obj2.function1();

cout<<"class A is a BASE class "<<endl;

A obj3;

obj3.function1();


return 0;
}