#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int kadansalgorithms(int arr[] , int n) {

int currunrtsum = 0;
int maxsum = INT_MIN;
for(int i=0;i<n;i++){
   currunrtsum+=arr[i];
   if(currunrtsum<0){
    currunrtsum=0;
   }
   maxsum=max(maxsum,currunrtsum);
   
}
return maxsum;
}
int main(){

int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int wrapsum;
int nonwrapsum;

  nonwrapsum=kadansalgorithms(arr,n); 
  int totalsum = 0;
  for(int i=0;i<n;i++){
    totalsum+=arr[i];
     arr[i]=-arr[i];
  }

wrapsum=totalsum+kadansalgorithms(arr,n);

cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0;
}
