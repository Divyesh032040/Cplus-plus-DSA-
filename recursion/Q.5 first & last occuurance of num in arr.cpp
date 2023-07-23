#include<iostream>
using namespace std;

int firstIndex ( int arr[] , int n , int i , int key) {

if(i == n) {
    return -1 ;
}
if ( arr[i] == key ) {
   return i ;
}
return firstIndex ( arr , n , i+1 , key) ;
}

int lastIndex (int arr[] , int n , int i , int key ) {

if(i == n) {
    return -1 ;   //Q.first and last occurrence of number in arr   
}
      
int restArray = lastIndex (arr , n , i+1 , key );

if(restArray != -1 ){
    return restArray ;
}

if (arr[i] == key ){
    return i ;
}
return -1;

}




int main(){

int arr[] = { 4 , 9 , 1 , 2 , 5 , 9 , 7 };

cout<< firstIndex ( arr , 7 , 0 , 9 ) <<endl;
cout<< lastIndex (arr,7,0,9);

return 0;
}