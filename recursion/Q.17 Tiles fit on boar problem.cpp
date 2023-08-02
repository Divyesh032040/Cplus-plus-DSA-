//Q.17 given a 2*n board and size of tiles 2*1 , count the number of way to fit tiles on board. 

#include <iostream>
using namespace std;
int tilesWay ( int n ) {
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilesWay ( n-1 ) + tilesWay ( n-2 );
}
int main() {
    
cout<<tilesWay (4)<<endl;

    return 0;
}