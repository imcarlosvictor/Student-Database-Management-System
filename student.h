#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
/* #include "report_card.h" */
using namespace std;

class Student
{
  public:
  class ReportCard
  {
    private:
    int math[2];
    int history[2];
    int science[2];
    int english[2];

    public:
    ReportCard();
    void SetGrades(int, int, int, int, int);
    void EditGrades();
    void DisplayReportCard();
    int GetGrade(string, int);
  };

  Student();
  Student(string, string, int, string, string);
  void DisplayStudentInfo();
  string GetFirstName();
  string GetLastName();
  void SetName(int);
  void SetGrade();
  void SetPhoneNumber();
  void SetAddress();
  void SetReportCard(ReportCard&);
  Student::ReportCard GetReportCard();

  private:
  string f_name;
  string l_name;
  int grade;
  string phone;
  string address;
  ReportCard report;

};
#endif
