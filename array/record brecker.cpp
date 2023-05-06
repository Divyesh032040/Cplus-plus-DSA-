#include "bits/stdc++.h"    
using namespace std;    //#include "bits/stdc++.h"
int main(){

int n;
cin>>n;

int arr[n+1]; 
arr[n] = -1;

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
if(n==1){
   return 0;
}
int ans=0;
int mx=-1;

for (int i = 0; i < n; i++)
{
    if(arr[i]>arr[i+1] && arr[i]>mx) {
    ans++;
    }
    mx=max(mx,arr[i]);
}
cout<<ans<<endl;

return 0;
}