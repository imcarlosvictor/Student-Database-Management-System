#ifndef REPORT_CARD_H
#define REPORT_CARD_H

#include <iostream>
using namespace std;

class ReportCard
{
  private:
  int math[2];
  int history[2];
  int science[2];
  int english[2];

  public:
  ReportCard();
  ReportCard(int math_first, int history_first, int science_first, int english_first);

  void PrintReportCard();
  //TODO: Delete RemoveGrade();
  void EditGrade(string, string, int);
  void RemoveGrade(string, int);
};
#endif
