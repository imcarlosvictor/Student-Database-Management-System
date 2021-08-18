#ifndef REPORT_CARD_H
#define REPORT_CARD_H

#include <iostream>
using namespace std;

class ReportCard
{
  int size;
  int math[2];
  int history[2];
  int science[2];
  int english[2];

  public:
  ReportCard() {
    math[0] = 0;
    history[0] = 0;
    science[0] = 0;
    english[0] = 0;
  }

  ReportCard(int math_first, int history_first, int science_first, int english_first) {
    // First half of the semester
    math[0] = math_first;
    history[0] = history_first;
    science[0] = science_first;
    english[0] = english_first;
  }

  void FirstPeriodGrades() {

  }

  void FinalPeriodGrades() {

  }

  void ListAllGrades() {

  }

  void AddGrade() {

  }

  void RemoveGrade() {

  }

  void EditGrade() {

  }
};
#endif
