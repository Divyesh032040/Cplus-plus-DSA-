#include<iostream>
using namespace std;
int n ,S ;
int main(){


cin>>n>>S;

int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}

int i=0 , j=0 , st=-1 , en=-1 , sum=0 ; 

while (j<n && sum+a[j]<=S) 
{
    sum+=a[j];
    j++;
}
 if (sum==S) {
    cout<< i+1 <<" " << j <<endl;
    return 0;
 }
 

while (j<n)
{
    sum+=a[j];
    while (sum>S){
        sum-=a[i];
        i++;
    }
    if (sum==S)
    {
        st=i+1;
        en=j+1;
        break;
    }
    j++;
}
cout<<st<<" "<<en<<endl; 
    return 0;
}