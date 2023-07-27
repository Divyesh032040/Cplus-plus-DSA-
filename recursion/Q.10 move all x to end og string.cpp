// move all x to end of string using recursion 
#include <iostream>
using namespace std;

string moveallx( string s ){
    if(s.length()==0){
        return "";
    }

char firstchar = s[0];
string ROS = moveallx(s.substr(1));

if(s[0]=='x'){
return ROS+firstchar;
}
return firstchar+ROS;
}
int main() {
cout<<moveallx("abcxdxef")<<endl;

    return 0;
}