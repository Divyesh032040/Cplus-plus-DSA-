//  GetBig (used &(and))
 
 #include<iostream>
 using namespace std;

int getBit ( int n , int pos ){
    return ( ( n & (1<<pos))!=0 );
}

 int main(){

cout<<getBit(8,2)<<endl;

    return 0;
 }





