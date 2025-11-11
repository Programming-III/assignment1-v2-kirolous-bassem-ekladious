#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here




Header file:
#ifndef instructor-H
#define instructor-H
#include <iostream>
usnig namespace std;
class instructor{
    private:
    string department;
    int experienceYears;
    public:
    instructor(string department,int experienceYears);
    void display();
    #endif
    Source file:
    #include "instructor.h"
    instructor::instructor(string department,int experienceYears){
        this.department=department;
        this.experienceYears=experienceYears;
    }
    void instructor::display(){
        cout<<"department : "<<department<<endl;
        cout<<"experience Years: "<<experienceYears<<endl;
    }







#endif
