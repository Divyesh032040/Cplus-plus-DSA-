#include <iostream> 
using namespace std;

//creating variable size array and print its element sum 

int getSum(int *arr , int n){
    int sum = 0;
    for(int i=0; i<n ;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main() {

int n;
cin >>n;

//array of size variable 
int * arr = new int[n];   //her we create int[n] in heap memory (dynamic memory) and take its returned address in pointer called arr 

//taking input in arr 
for (int i = 0; i < n; i++){
   cin>>arr[i];
}

int ans = getSum(arr , n );

cout<<"sum of given arr is "<<ans<<endl;



return 0;
}