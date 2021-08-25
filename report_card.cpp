/* #include <iostream> */
/* #include "report_card.h" */
/* using namespace std; */

/* // Consructors */
/* ReportCard::ReportCard() */
/* { */
/*   // First half */
/*   math[0] = 0; */
/*   history[0] = 0; */
/*   science[0] = 0; */
/*   english[0] = 0; */
/*   // Final half */
/*   math[1] = 0; */
/*   history[1] = 0; */
/*   science[1] = 0; */
/*   english[1] = 0; */
/* } */

/* ReportCard::ReportCard(int math_first, int history_first, int science_first, int english_first) { */
/*   // First half */
/*   math[0] = math_first; */
/*   history[0] = history_first; */
/*   science[0] = science_first; */
/*   english[0] = english_first; */
/*   // Final half */
/*   math[1] = 0; */
/*   history[1] = 0; */
/*   science[1] = 0; */
/*   english[1] = 0; */
/* } */

/* // Methods */
/* void ReportCard::GetReportCard() */
/* { */
/*   cout << "|----------[Report Card]----------|\n"; */
/*   cout << "|  Subject  |  First   |   Final  |\n"; */
/*   cout << "|---------------------------------|\n"; */
/*   cout << "|   Math    |    " << math[0] << "    |    " << math[1] << "     |\n"; */
/*   cout << "|  History  |    " << history[0] << "    |    " << history[1] << "     |\n"; */
/*   cout << "|  Science  |    " << science[0] << "    |    " << science[1] << "     |\n"; */
/*   cout << "|  English  |    " << english[0] << "    |    " << english[1] << "     |\n"; */
/*   cout << endl; */
/* } */

/* void ReportCard::EditGrade(string subject, int new_grade) */
/* { */
/*   // Points to the respective array the user intends on changing */
/*   int *sub_ptr = nullptr; */
/*   if (subject  == "math") */
/*     sub_ptr = math; */
/*   else if (subject == "history") */
/*     sub_ptr = history; */
/*   else if (subject == "science") */
/*     sub_ptr = science; */
/*   else if (subject == "english") */
/*     sub_ptr = english; */

/*   // If the value matches with the user's input assign it to 0; */
/*   for (int i=0; i<2; ++i) { */
/*     if (*(sub_ptr + i) == new_grade) { */
/*       *(sub_ptr + i) = 0; */
/*     } else { */
/*       cout << "Grade not found"; */
/*     } */
/*   } */
/* } */
