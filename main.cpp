#include <iostream>
#include<sstream>
#include <vector>
#include "roster.h"
using namespace std;


int main() {
    std::cout << "God is love!" << endl;

    //Print out First Info
    cout << "Application: Student Roster Database Mock::  JYM1 TASK 1: CLASS ROSTER" << endl;
    cout << "Course Title: Scripting and Programming - Applications – C867" << endl;
    cout << "Programming Language: C++" << endl;
    cout << "Student ID: 001426839" << endl;
    cout << "Name: Benji Magnelli" << endl;
    cout << endl;



    //Creating Roster Instance
    Roster classRoster;

    classRoster.printAll();
    classRoster.printInvalidEmails();

    for (int i = 0; i < classRoster.rosterSize; i++) {

        string studentID = classRoster.classRosterArray[i]->GetStudentID();

        classRoster.printAverageDaysInCourse(studentID);
    }



    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3");

    //Desuctor is needed


    return 0;


}






