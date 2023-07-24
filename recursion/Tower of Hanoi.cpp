
//Q.3) TOWER OF HANOI 


#include<iostream>
using namespace std ;

void towerofhanoi ( int n , char s , char h  , char d ){
     if(n==0){
        return;
     }
    towerofhanoi (n-1 , s , h , d );
    cout<<"move from"<<s<<"to"<<d<<endl;
    towerofhanoi (n-1 , h , d , s ) ;
}


int main (){

towerofhanoi ( 3 , 'A' , 'C' , 'B');

    return 0;
}