#include <iostream>
using namespace std;

int main() {

// Pointer with Arrays 

int  arr[4]={ 2 , 5 , 6 };

cout<<"our arr is : {2 , 5 , 6 } "<<endl;

cout<<"location of first memory block is : "<< &arr[0]<<endl; //0x7ffdbdd70e70
//we can also get address like this 
cout<<"location of first memory block is : "<< arr <<endl; //0x7ffdbdd70e70

//playing with pointer 

cout<<"*arr gives : "<<*arr<<endl; //2

cout<<"*arr+1 gives : "<<*arr+1<<endl; //3

cout<<"*(arr+1) gives : "<< *(arr+1) <<endl; //5

cout<<"(*arr)+1 gives : "<<(*arr)+1<<endl; //3

//formula we can write--> arr[i] = *( arr+i ) or i[arr] = *( i + arr )

cout<<arr[2] <<" and "<< *(arr+2) <<endl; //6 and 6
cout<<2[arr] <<" and "<<*(2+arr)<<endl;  //6 and 6

cout<< 2[arr] <<" and "<< arr[2] <<endl; //6 and 6

int array[5]={2,4,6,8,10};

int *p = &array[3];

cout<<"size of p which store address of arr[3] : "<<sizeof(p)<<endl; //8
cout<<"size of arr[3] : "<<sizeof(arr[3])<<endl; //4
cout<<"size of array : "<<sizeof(array)<<endl; //20 

return 0;
}