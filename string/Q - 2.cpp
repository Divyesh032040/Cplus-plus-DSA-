#include<iostream>
#include<algorithm>
#include<string>
#include<climits>
using namespace std;
int main(){

//form biggest number from numeric string

string s = "83577453789";


sort(s.begin() , s.end(), greater<int>() );

cout<<s;

return 0;

}