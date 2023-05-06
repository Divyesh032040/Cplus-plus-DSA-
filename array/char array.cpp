//character arrays 
#include<iostream>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){

int n;
cin>>n;
char array[n+1];
cin>>array;

bool check = true;

rep(i,0,n/2)
{
    if (array[i]!=array[n-i-1])
    {
        check=false;
        break;
    }
    else{
        if (check==true)
        {
            cout<<"word is a palindrome "<<endl;
        }
        
    }
    
}
    return 0;
}
