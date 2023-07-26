// remove duplicates from strings 
#include <iostream>
using namespace std;

string removeDup (string s ){
    if (s.length() ==0){
        return "  ";
    }

char cd = s[0];

string ans = removeDup (s.substr(1));

if(cd == ans[0]){
    return ans;
}
return (cd+ans) ; 

}
int main (){
cout<<removeDup ("aaabccdeeef")<<endl;
    return 0;
}
