#include <iostream>
using namespace std;
int main() {

//MCQs on Pointer 

//Question 1 

int first = 78;
int second = 90;
int*ptr=&second;
*ptr=30;
cout<<first<<" "<<second<<endl;

//ans - first = 78 , second = 30. 

//Question2 

int H = 45;
int *p = &H;
int *q = p;
(*q)++;
cout<<H<<endl;

//ans - H = 46 

//Question 3 

int F = 8;
int *ps = &F;
cout<<(*ps)++<<" ";    //her is post increment so first value will be print(8) 
                       //than increased (9).  
cout<<F<<endl;


//Question 4

int *OP = 0;   //its a NULL pointer so can not put it value on it so its give us segmentation fault 
int L = 12;   
*OP = L;            
cout << *OP << endl;   // ans - segmentation fault

//Question 5 

int first1 = 8;
int second1 = 11;
int *third = &second1;
*third = *third +2 ;
cout<<first1<<" "<<second1<<endl;

//ans = 8 13

//Question 6

float f = 12.5;
float e = 21.5;
float *ptr7 = &f;
(*ptr7)++;
*ptr7 = e;

cout<<*ptr7<<" "<<f<<" "<<e<<endl;

//ans -> ptr7 = f = e = 21.5


//Question 7 

int arr[5];
int *ptr45;
cout<<sizeof(arr)<<" "<<sizeof(ptr45)<<endl;

//ans -> arr=20 , ptr45 = 8

//Question 8

int arr[]={11,21,13,14};
cout<<*(arr)<<" "<<*(arr+1)<<endl;  //ans -> *(arr)=11 , *(arr+1) = 21

// *(arr) means value of 1st element of array.
//we also have formula from it " ' arr[i]=*(arr+i) ' "

//Question 9

int arr[6]={11,12,31};
cout<<arr<<" "<<&arr<<endl;

//ans - 0x7ffdf51dbe10   0x7ffdf51dbe10
//her both address will be same because &arr = arr , both represent address of array
//address of arr = &arr = &arr[0] all are same 

//Question 10


int arr[6]={11,21,13};
cout<<(arr+1)<<endl;

//ans -> address of arr[1]

//Question 11

int arr[6]={11,21,31};
int *pp=arr;
cout<<pp[2]<<endl;   //arr[i]=*(arr+i)

//ans -> 32



return 0;
}