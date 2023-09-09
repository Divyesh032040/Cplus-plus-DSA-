#include <iostream>
using namespace std;

class student {

    private:
        string name;
        int age;
        int height;

    public:
        int getAge(){
              return this -> age;
        }    
};

int main() {

student first ;

cout<< "Encapsulated student class " <<endl;

return 0;
}

//data member + functions = encapsulation
//encapsulation ~ data hiding / info hiding 
//encapsulation - all data members are private , no other class can use directly 
//we can made class read only - by public getter func.
//we can manage access using access modifier - privet , public , protected 

//geeks for geeks example 
// #include <iostream>
// #include <string>

// using namespace std;

// class Person {
// private:
// 	string name;
// 	int age;
// public:
// 	Person(string name, int age) {
// 	this->name = name;
// 	this->age = age;
// 	}
// 	void setName(string name) {
// 	this->name = name;
// 	}
// 	string getName() {
// 	return name;
// 	}
// 	void setAge(int age) {
// 	this->age = age;
// 	}
// 	int getAge() {
// 	return age;
// 	}
// };

// int main() {
// Person person("John Doe", 30);

// cout << "Name: " << person.getName() << endl;
// cout << "Age: " << person.getAge() << endl;

// person.setName("Jane Doe");
// person.setAge(32);

// cout << "Name: " << person.getName() << endl;
// cout << "Age: " << person.getAge() << endl;

// return 0;
// }




