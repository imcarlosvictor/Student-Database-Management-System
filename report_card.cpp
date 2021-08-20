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

void ReportCard::AddGrade()
{

}

void ReportCard::RemoveGrade()
{

}

void ReportCard::EditGrade()
{

}
