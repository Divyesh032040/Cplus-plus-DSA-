#include <iostream>
using namespace std;

int main() {

int num = 7;

char ch = 'A';

int *ptr1 = &num;

char *ptr2 =&ch; 

cout<<"address of num : "<< ptr1 << endl;   // block named ptr which stored address of num , 
cout<<"address of char : "<< &ptr2 << endl;  // its give you address in return. 

cout<<"value of num address : "<< *ptr1 << endl;  // block of ptr which stores address of num , 
cout<<"char of ch address id "<< *ptr2 << endl;   // which have some int type value , so its gives 7 in return.  

cout<<"size of pointer is " << sizeof(ptr1)<<endl;  // pointer always stored a address so , no matter type of data is 
cout<<"size of pointer is " << sizeof(ptr2)<<endl;  // int , double , char etc.  size of pointer is always 8 byte 

return 0;
}
