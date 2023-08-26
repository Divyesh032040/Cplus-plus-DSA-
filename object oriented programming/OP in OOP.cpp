#include<iostream>
using namespace std;
class student {             // her student is use defined data type. 
        public:          //student is a class and name , age , gender are its data member
    string name;
    int age;
    bool gender;
    
    void printInfo(){
    cout<<"name : ";
    cout<<name<<endl;
    cout<<"age : ";     
    cout<<age<<endl;
    cout<<"gender : ";
    cout<<gender<<endl;

    }
};

int main(){

//we can accessing its data member using dot operator.

// student a;
// a.name = 'ram';
// a.age = 25;
// a.gender = 0;

// student b;
// b.name = 'sita';
// b.age = 20;
// b.gender = 1;

//accept this length type of write long code , we can write this using array and for loop too.

student arr[3];
for(int i=0 ; i<3 ; i++){
    cout<<"name : ";
    cin>>arr[i].name;   
    cout<<"age : ";     
    cin>>arr[i].age;
    cout<<"gender : ";
    cin>>arr[i].gender;
}       
//for print this values we can use function like printInfo which is inside a student class.

for(int i=0 ; i<3 ; i++){
    arr[i].printInfo();
}

    return 0;
}