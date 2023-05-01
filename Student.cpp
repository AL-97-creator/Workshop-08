#include <iostream>
#include <ctime>
#include <Student.h>

using namespace::std;

Student::Student(){
    student_ID=0;
}
Student::Student(int ID){
    this->student_ID=student_ID;
}

void Student::set_ID(int student_ID){
    this->student_ID=student_ID;
}

int Student::get_ID(){
    return student_ID;
}