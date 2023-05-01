#ifndef STU_H
#define STU_H
#include <iostream>
#include <ctime>

using namespace::std;

class Student{
    private:
    int student_ID;
    public:
    Student();
    Student(int student_ID);
    void set_ID(int student_ID);
    int get_ID();
};

#endif