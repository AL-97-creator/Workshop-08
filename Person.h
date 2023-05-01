#ifndef PER_H
#define PER_H
#include <iostream>
#include <ctime>

using namespace::std;

class Person: public Student, public Instructor{
    private:
    string name;
    public:
    void set_name(string name);
    string get_name();
};

#endif