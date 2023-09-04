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

//double pointer - pointer of pointer 

 int i = 10;
    
    int *p1 = &i;
     
    int **p2 = &p1;
      
    int ***p3 = &p2;
    
cout<<"sab changa see"<<endl;
    
cout<<p3<<"  "<<&p2<<endl; //0x7fff34042d00  0x7fff34042d00

cout<<***p3<<endl; //10  --> //we can accsess I through Pointer of Pointer of Pointer too
    

return 0;
}

//o/p

// address before update p : 0x3668fffc34
// address after update p : 0x3668fffc34
// size of arr : 8
// sum is : 60
//0x7fff34042d00  0x7fff34042d00
//10
