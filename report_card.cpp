#include "report_card.h"

// Consructors
ReportCard::ReportCard() 
{
  math[0] = 0;
  history[0] = 0;
  science[0] = 0;
  english[0] = 0;
}

ReportCard::ReportCard(int math_first, int history_first, int science_first, int english_first) {
  // First half of the semester
  math[0] = math_first;
  history[0] = history_first;
  science[0] = science_first;
  english[0] = english_first;
}

// Methods
void ReportCard::FirstPeriodGrades()
{
}

void ReportCard::FinalPeriodGrades()
{

}

void ReportCard::ListAllGrades()
{

}

void ReportCard::AddGrade()
{

}

void ReportCard::RemoveGrade()
{

}

void ReportCard::EditGrade()
{

}
