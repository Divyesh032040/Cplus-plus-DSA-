#include<iostream>
#include<vector>
using namespace std;
int main(){
//vectors are dynamic arrays where you can resize input or delete elements.  
//basic operation in vector.
// 1) how to declare vector -
//vector< data type > name of vector ;
vector<int> v;
//lets put elements in vector "vector name."
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
//changing value of element in vector 
v[1]=100;
v[3]=400;
//cout elements using [] but we should always use loop , not this . 
cout<<v[0]<<endl;
cout<<v[1]<<endl;      //accept this we can use foe loop.
cout<<v[2]<<endl;
cout<<v[3]<<endl;
//v[n] is not good than v.at(n) because if we try to get element which is out of rang than its not sow error 
//and give a random garbage value 
cout<<v[10]<<endl;
//v.at is more good to use because its give error if we try to access element which is out of size in vector 
cout<<v.at(10)<<endl;
cout<<v.at(1)<<endl;
//for accessing size of vector , we use vector name.size() function.
cout<<" size of vector is : "<<v.size()<<endl;
//we can also use a loop for print all these elements 
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
// //if we want delete last element of string than we use pop_back() function.
v.pop_back();  

for(int i=0;i<32;i++){
    v.push_back(i+1);
    cout<<v.size()<<endl;
}
//one more important function is called { capacity } - its give us current capacity of vector 
//Returns the size of allocate storage, expressed in terms of number of element can be held by vector
cout<<" the capacity is : "<<v.capacity()<<endl;

//capacity will be increase by "capacity*2" after all vector filled by elements. 

    return 0;
} 