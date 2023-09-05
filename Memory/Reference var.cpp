//reference variable 

#include<iostream>
using namespace std;
int main() {

int i = 50;
int &j = i;    //reference variable 

cout<<i<<" "<<j<<endl;  // 90 90
cout<<&i<<" "<<&j<<endl;   //0xe3db5ffc94   0xe3db5ffc94

//in reference variable , value will be same but it has more than one name.

i++;              //while increment of I , J will be also Increase .   
cout<<j<<endl;    //51

//basically same memory different name. 

return 0;
}