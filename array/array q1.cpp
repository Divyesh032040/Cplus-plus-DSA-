#include<iostream>
using namespace std;

//write function for find element of array.

int linearsearch (int array[],int n, int key) {
   for(int i=0;i<n;i++) {
    if (array[i]==key)
    {
        return key;
    }
    else {
        return -1;
    }
   }
}


int main (){

int n;
cin>>n;

int array[n];

for(int i=0;i<n;i++){
    cin>>array[i];
}

int key;
cin>>key;

//call function 

cout<<linearsearch(array,n,key);

    return 0;
}