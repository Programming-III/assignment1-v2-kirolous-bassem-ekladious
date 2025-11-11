#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here

Header file:
#ifndef course-H
#define course-H
#include <iostream>
usnig namespace std;
Header file:
class course{
    private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
    public:
    course(string coursecode,string courseName,int maxStudents,int currentStudents)
    addStudent(const Student& s);
    void displayCourseInfo;
    #endif












#endif
