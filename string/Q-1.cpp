#include<iostream>
#include<algorithm>
#include<string>
#include<climits>
using namespace std;
int main(){
string s = "hefwyrnwkjb";
//convert into upper case ;
for (int i = 0; i < s.size(); i++)
{
    if (s[i]>='a'&& s[i<='z'])
    {
        s[i]-=32;   
    }    
}
cout<<s<<endl;
//convert into lowercase ; 
for (int i = 0; i < s.size(); i++)
{
    if (s[i]>='A'&& s[i<='Z'])
    {
        s[i]+=32;
    } 
}
cout<<s<<endl;

//second way with transform function 

string bolo =" har har mahadev har ";

transform (bolo.begin() , bolo.end() ,bolo.begin(),  ::toupper);

//transform function argument - (pass full string , from where , to convert in what ?)
//for passing full string we do "str.begin() , str.end()" 
//from where - str.bolo()
//to convert in what ? - ::toupper , ::tolower etc 

cout<<bolo<<endl;


transform (bolo.begin() , bolo.end() ,bolo.begin(),  ::tolower);

cout<<bolo<<endl;

 return 0;
}