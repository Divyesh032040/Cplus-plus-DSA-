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

void subsequnce ( string s , string ans ){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);
     subsequnce (ros,ans);
     subsequnce (ros,ans + ch);
     
}

int main() {
subsequnce ("ABC","");
cout<<endl;
return 0;
}