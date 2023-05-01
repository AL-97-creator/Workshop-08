#ifndef GRA_H
#define GRA_H
#include <iostream>
#include <ctime>
#include <student.h>

using namespace::std;

class Grade{
    private:
    int student_ID;
    int value;
    string assignment;
    public:
    Grade(int student_ID, int value, string assignment);
    void set_value(int value);
    void set_studentID(int student_ID);
    void set_assignment(string assignment);
    int get_value();
    int get_studentID();
    string get_assignment();
};

#endif