#include <iostream>
using namespace std;
int main() {

//pointer with char array. 

int arr[5]={2,4,6,8,10};

char ch[5]="abcd";

//cout implementing differently for int and char arrays

cout<<arr<<endl; //address of arr[0] = 0x7ffdb83faa00
cout<<ch<<endl;  //abcd

int*M = &arr[0]; 

char*L = &ch[0]; 

cout<<M<<endl;    //address of arr[0] = 0x7ffdb83faa00

cout<<L<<endl;    //abcd

//so in char arr , cout implementation is not same. 
//-------------------------------------------------------------//



















return 0;
}