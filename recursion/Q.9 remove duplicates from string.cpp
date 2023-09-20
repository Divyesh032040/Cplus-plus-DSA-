// Remove duplicate from string while it's not in sorted from 

// time complexity to sort : O(n log(n));

// Time complecity of mapping the string ;

// using a set ;

//Code by soham_piprotar

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
#include<unordered_set>
//#include <bits/stdc++.h>

#define vi vector<int>
#define vs vector<string>
#define vvi vector <vi> 
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)

using namespace std;
const int MOD = 1e9+7 ;

set<char> mp ;

int main(){

    string s ;

    std::cin>>s; 

    for(char i :s){

        mp.insert(i);
    }

    for(char i :mp){
        std::cout<<i;
    }
   
    return  0;

}

