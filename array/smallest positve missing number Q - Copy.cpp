// Problem 7(M)

//smallest positive missing number 

// time complexity : O(n);



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
//#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector <vi> 
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)

using namespace std;

const int N=1e6+2,M=1e9+7;

int n;

int main(){

    cin>>n;

    vi a(n);

    rep(i,0,n){
        cin>>a[i];
    }

    vi b(N);

    rep(i,0,N){
        b[i] = -1 ;
    }

    rep(i,0,n){
        if(a[i] > -1){
        b[a[i]]++;
        }
    }

    int d;

    rep(i,0,N){
    if(b[i] == -1){
       cout<<i<<endl;
       return 0 ;
    }

    }
    //cout<<d<<endl;

    cout<<-1<<endl;
    
    return 0;
}
