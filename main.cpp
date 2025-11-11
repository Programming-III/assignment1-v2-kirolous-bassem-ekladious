#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

Source file:

#include "person.h"
person::pesron (string name,int id ){
    this.name=name;
    this.id=id;
}
void person::display(){
  cout <<"Name :"<<name<<endl;
  cout<<"Id :"<<id<<endl;
}
}
#include "student.h"
student::student(int yearLevel,string major){
    this.yearLevel=yearLevel;
    this.major=major;
}
void student::display(){
    cout<<"Year level : "<<yearlevel<<endl;
    cout<<"magor :"<<major<<endl;
}
#include "instructor.h"
    instructor::instructor(string department,int experienceYears){
        this.department=department;
        this.experienceYears=experienceYears;
    }
    void instructor::display(){
        cout<<"department : "<<department<<endl;
        cout<<"experience Years: "<<experienceYears<<endl;
    }
#include "course.h"
    course::course(string coursecode,string courseName,int maxStudents
    int currentStudents){
        this.coursecode=coursecode;
        this.courseName=courseName;
        this.maxStudents=maxStudents;
        this.currentStudents=currentStudents;
    }
    void student::addStudent(const Student& s){
        Student* newStudents = new Student[numOfStudents + 1];
        for (int i = 0; i < numOfStudents; i++) {
        newStudents[i] = student[i];
    }
    
    
    student ++;
    
    void course::displayCourseInfo() const {
    cout << "course code: " << courseCode << endl;
    cout << "course Name: " << courseName << endl;
    cout << "Max students: " << maxStudents << endl;
    cout << "current Students: " << currentStudents<< endl;
    for (int i = 0; i < numOfCourses; i++) {
        cout << "students are: " << student[i] << endl;
} }




























int main()
{
    course* c1 = new course("CS 101","Intoduction to programming",3,"omar nabil");
    instructor *t1 = new instructor("Dr.Lina Khaled","Computer science",5);
    student * s1= new student("Omar Nabil",2,"Informatics");
    

    return 0;
}






// ==================== Student Class Implementation ====================






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
