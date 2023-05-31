// //is given number n is power of 2 ?

// //logic 

// let n = 46 , n=46 = 101110   so 101110
//            n-1=45 = 101101     &101101 = 101100 

// and let n = 64 (which is power of 2 )
// n = 64  = 1000000       so 1000000
// n-1 = 63 =	111111       & 0111111 = 0000000 

// so if anu number is power of 2 than than number
// n and n-1 number's binary numbers & opration comes 0.

// so we check if n & n-1 (which ans comes 0 if its power of 2 )
// is !(0) than bool function gives 1 means given number n is power
// of 2. otherwise not . 

#include<iostream>
#include<climits>

#include<activdbg.h>

using namespace std; 
bool ispowerof2 (int n ) {
return (n && !(n & n-1 ));
}
int main(){
cout<<ispowerof2(64);
return 0;
}