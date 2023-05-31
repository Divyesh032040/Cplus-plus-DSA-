// (clearBit (using ~ , &) )

#include<iostream>
using namespace std;

int clearBit(int n , int i ){
int mask = ~(1<<i);
return (mask & n );
}
int main(){

cout<<clearBit(5 , 2);
    return 0;
}