#include <iostream>
using namespace std;

//pointers with functions 

void print(int *p){
    cout<<*p<<endl;
}

void update(int*p){
    p=p+1;
}

int getSum( int arr[] , int n){
   cout<<"size of arr : "<< sizeof(arr)<<endl;  //8 
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=i[arr];
    }
    cout<<"sum is : ";
    return sum;   //75
}

int main() {

int val = 5;
int*p=&val;

cout<<"address before update p : "<<p<<endl; //0x7ffe273f3884

cout<<"address after update p : "<<p<<endl; //0x7ffe273f3884

int arr[5]={5,10,15,20,25};

cout<<getSum(arr+2,3)<<endl;   //60

//her we can send only hulf arr to getSum USING arr+i , which is based on our formula arr[i]=*(arr+i)

return 0;
}

//o/p

// address before update p : 0x3668fffc34
// address after update p : 0x3668fffc34
// size of arr : 8
// sum is : 60