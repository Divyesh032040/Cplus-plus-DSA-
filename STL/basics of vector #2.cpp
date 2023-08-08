#include <iostream>
#include<vector> 
using namespace std;
int main() {

vector<int> v;

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

//we can use for loop for output/iterate   
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
} //1 2 3 4

cout<<endl;
// another way to iterate through all elements of vector is iterator 
vector<int>::iterator it;  //her it is called "it"
for(it=v.begin();it!=v.end();it++){
    cout<<*it<<endl;   //out iterator is a pointer thats why we use "*"
}      //1 2 3 4
cout<<endl;
//we can also use "auto " keyword for print all element of vector    
for(auto element:v){
    cout<<element<<endl;  //element is not a iterator but its represent elements of vector and auto 
//     output: 1 2 3 4       will consider elements are int or char automatically 
}

//for delete last element of vector we use pop_back() function.
v.pop_back();    // 1 2 3 

vector<int>v2(3,50); //we can specify size of vector and what element we want in all place.
//her output will be : 50 50 50 

//what is we want swap the values of 2 vector to each other ?
// we can use swap(first vector , second vector);
swap(v,v2);

//for sort the vector we can use sort function 
//sort(v.begin(),v.end());

//what is std::pair ?
//its allow to stor pair of value in vector 
pair <int,char> p; //its helpful while we have to stor 2 values together  
p.first=3;         //we can access that pair elements as vector_name.first/second. 
p.second='d';









return 0;
}