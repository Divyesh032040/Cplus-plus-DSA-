#include<iostream>
using namespace std;

void reverse ( string s ) {
    
    if ( s.length() == 0 ) {
        return ; 
    }
    
    string ROS = s.substr (1) ;
    reverse (ROS) ;
    cout<< s[0];
}
int main(){
reverse (" divyesh ");
return 0;
}