// SetBit (using |(or))

#include<iostream>
using namespace std;
int setBit (int n , int i ){

    return(n|(1<<i));
}

int main(){

cout<<setBit(5 , 1);
    return 0;
}