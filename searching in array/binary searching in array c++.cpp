// Binary search usig recurcive method ;

// Time complexity = O(log(N));

// code by soham piprotar
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
const int N = 1e5+7 ; 

 int n;

int B(int a[],int s,int e,int key){

    if( s == e){
        if(a[0] == key){
            return s;
        }else{
            return -1 ;
        }
    }else{

        int mid = (s+e)/2;

        if(a[mid] == key){
            return mid ;
        }if( a[mid] > key){
            return B(a,s,mid-1,key);
        }else{
            return B(a,mid+1,e,key);
        }
    }

    return -1 ;
}

int main(){

    int n;
    cin>>n;

    int a[n];

    int key ;cin>>key ;

    for(int i=0 ;i<n;i++){

        cin>>a[i];
    }

    int d =B(a,0,n-1,key);

    if( d != -1){
        cout<<" Element Found in array at : "<<d<<endl;
    
    }else{
        cout<<" Element is not found in array :"<<endl;
    }

    return 0 ;
}
