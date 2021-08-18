#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
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
  Student(string fname, string lname, int grade, string phone, string address);
  
  void getName();
  void getGrade();
  void getPhoneNumber();
  void getAddress();
  void setName();
  void setGrade();
  void setPhoneNumber();
  void setAddress();
  void PrintStudentInfo();
  void PrintReportCard();
};
#endif
