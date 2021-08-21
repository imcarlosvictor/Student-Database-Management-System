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
  //TODO: Determine how to have student point to his/her report card
  // Create a report card
  ReportCard report;
  
  void PrintStudentInfo();
  void setName(int, string);
  void setGrade(int);
  void setPhoneNumber(string);
  void setAddress(string);
};
#endif
