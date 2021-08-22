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
  string GetFirstName();
  string GetLastName();
  void SetName(int, string);
  void SetGrade(int);
  void SetPhoneNumber(string);
  void SetAddress(string);
  void CreateReportCard();
  void EditReportCard();
};
#endif
