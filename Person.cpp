#include <iostream>
#include <ctime>
#include <Student.h>

using namespace::std;

Person::Person(){
    name="none";
}
Person::Person(string name){
    this->name=name;
}

void Person::set_name(string name){
    this->name=name;
}

string Person::get_name(){
    return name;
}