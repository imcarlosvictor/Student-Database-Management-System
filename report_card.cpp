#include <iostream>
#include "report_card.h"
using namespace std;

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
void ReportCard::PrintReportCard()
{
  cout << "|----------[Report Card]----------|";
  cout << "|  Subject  |  First   |   Final  |";
  cout << "|Math: " << math[0] << " | \t" << math[1] << "|";
  cout << "|History: " << history[0] << " | \t" << history[1] << "|";
  cout << "|Science: " << science[0] << " | \t" << science[1] << "|";
  cout << "|English: " << english[0] << " | \t" << english[1] << "|";
}

void ReportCard::EditGrade(string subject, string period, int grade)
{
  if (period == "first") {
    if (subject == "math")
      math[0] = grade;
    else if (subject == "history")
      history[0] = grade;
    else if (subject == "science")
      science[0] = grade;
    else if (subject == "english")
      english[0] = grade;
    else
      cout << "No existing subject in record";
  } else {
    if (subject == "math")
      math[1] = grade;
    else if (subject == "history")
      history[1] = grade;
    else if (subject == "science")
      science[1] = grade;
    else if (subject == "english")
      english[1] = grade;
    else
      cout << "No existing subject in record";
  }
}

void ReportCard::RemoveGrade(string subject, int new_grade)
{
  // Points to the respective array the user intends on changing
  int *sub_ptr = nullptr;
  if (subject  == "math")
    sub_ptr = math;
  else if (subject == "history")
    sub_ptr = history;
  else if (subject == "science")
    sub_ptr = science;
  else if (subject == "english")
    sub_ptr = english;

  // If the value matches with the user's input assign it to 0;
  for (int i=0; i<2; ++i) {
    if (*(sub_ptr + i) == new_grade) {
      *(sub_ptr + i) = 0;
    } else {
      cout << "Grade not found";
    }
  }
}
