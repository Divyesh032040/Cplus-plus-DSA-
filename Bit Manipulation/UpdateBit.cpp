// updateBit using clearBit and then seBit

#include<iostream>
using namespace std;
int updateBit (int n , int i , int w){
    int mask = ~(1<<i);
    n = n & mask ; 
return (n|w<<i);
 
}
int main(){

cout<<updateBit(5,1,1)<<endl;
return 0;
}



