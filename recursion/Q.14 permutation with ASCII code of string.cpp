#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string> 
#include <map>
#include <set> 
#include <bits/stdc++.h> 
using namespace std;

void permutationWithCode ( string s , string ans ){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
    char ch=s[i];
    int code = ch;
    string ros = s.substr(0,i)+s.substr(i+1);
    permutationWithCode ( ros , ans +ch );
    permutationWithCode ( ros , ans + to_string(code) );
    }
}
int main() {

permutationWithCode("ABC","");
return 0;
}