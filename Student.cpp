#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(){
    name = new string;
    age = new int;

    cout << "Student object created!\n";
}

Student::~Student(){
    delete name;
    delete age;
    cout << "Student object destroyed!\n";
}
    
void Student::setName(string s){
    *name = s;
}

void Student::setAge(int i){
     *age = i;
}

string Student::getName() const {
    return *name;
}

int Student::getAge() const {
    return *age;
}