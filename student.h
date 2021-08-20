#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "report_card.h"
using namespace std;

class Student
{
  private:
  string f_name;
  string l_name;
  int grade;
  string phone;
  string address;

  public:
  Student();
  Student(string fname, string lname, int grade, string phone, string address);
  // Create a report card
  ReportCard report;
  
  void PrintStudentInfo();
  //TODO: Determine how to have student point to his/her report card
  void setName();
  void setGrade();
  void setPhoneNumber();
  void setAddress();
};
#endif
