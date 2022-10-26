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
    public:
    ReportCard();
    void SetGrades(int math, int history, int science, int english);
    void EditGrades();
    void DisplayReportCard();
    int GetGrade(string, int);

    private:
    int math[2];
    int history[2];
    int science[2];
    int english[2];
  };

  Student();
  Student(string f_name, string l_name, int grade, string phone, string address);
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
