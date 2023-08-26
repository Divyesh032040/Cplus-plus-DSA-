#include <iostream>
using namespace std;

class student {
string name;
public:

int age;
bool gender;

void setname(string s){   //setae function
    name = s;           //we have to create function
}

bool printInfo(){    //function for print 

    cout<<"name : ";
    cout<<name<<endl;
    cout<<"age : ";     
    cout<<age<<endl;
    cout<<"gender : ";
    cout<<gender<<endl;
}

};

int main() {

student arr[3];
for(int i=0;i<3;i++){
    string s;           //declare string  
    cout<<"name : ";
    cin>>s;             //input string s 
    arr[i].setname(s);  //call function with input string s which store in name
    cout<<"age : ";     
    cin>>arr[i].age;
    cout<<"gender : ";
    cin>>arr[i].gender;
}

for(int i=0;i<3;i++){
    arr[i].printInfo();
}
return 0;
}