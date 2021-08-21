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
  
  void DisplayStudentInfo();
  string getFirstName();
  string getLastName();
  void setName(int, string);
  void setGrade(int);
  void setPhoneNumber(string);
  void setAddress(string);
};
#endif
