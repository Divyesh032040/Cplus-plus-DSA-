
#include<iostream>
using namespace std;
int main(){

//MCQs on pointers q.11 to 21 

//Question 11

int arr[6]={11,21,31};
int *pp=arr;
cout<<pp[2]<<endl;   //arr[i]=*(arr+i)

//ans -> 32

//Question 12

int arr[]={11,12,13,14,15};
cout<<*(arr)<<" "<<*(arr+3)<<endl;
//her *(arr) is represent a first element of array
//ans -> 11 , 14 

//Question 13

int array[] = {11,21,31,41};
//int *ptr88 = array++;    //her ans is "error" because her we are trying to change in symbol table 
//cout<<*ptr88 <<endl;     //we can not do any change in array with pointer 

//ans -> ERROR 

//Question 15

char ch = 'a';
char *ptr67 = &ch;
ch++;
cout<<*ptr67<<endl;

//ans -> b

//Question 16

char arr[]="abcde";
//char *p = &arr[0];
//cout<<p<<endl;

//ans -> abcde

// pointer with char array , cout implementation is different , arr[0] , but still output will be full char arr.   

//Question 17

// char array[]="abcde";
// char *p = &array[0];
// p++;
// cout<<p<<endl;

//ans -> "bcde"

//Question 18

char str[]="babbar";
char *p = str;
cout<<str[0]<<" "<<p[0]<<endl;

//ans -> b b 

//Question 19

// void update(int *p){
//     *p = (*p) *2 ;
// }

// int main() {

// int i = 10;
// update(&i);
// cout<<i<<endl;
//     return 0;
// }

//ans -> 20 

//Question 20 


int FIRST = 110;
int *h = &FIRST;
int **hh = &h;
int SECOND = (**hh)++ + 9;
cout<< FIRST << " " << SECOND << endl;

//ANS : FIRST ->  111   SECOND -> 119 

//Question 20 

int F = 100;
int *P = &F;
int **Q = &P;
int SEC = ++(**Q);
int *R = *Q;
++(*R);
cout<<F<<" "<<SEC<<endl;

//   ans -> 102  101


//Question 21

// void inc(int **p){
//     ++(**p);
// }
// int main(){
//     int num = 110;
//     int *ptr = &num;
//     inc(&ptr);
//     cout<< num<<endl;
//     return 0;
// }

//ans -> 111 

  //All questions from Love Bubber DSA series part 3 of Pointer video. 

return 0;
}
