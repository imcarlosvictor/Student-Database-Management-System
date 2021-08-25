#include "student.h"

// ########################################## 
// STUDENT
// ########################################## 
// CONSTRUCTORS
Student::Student() {
  f_name = "";
  l_name = "";
  this->grade = 0;
  phone = "";
  address = "";
  // Create report card
  ReportCard report;
}

Student::Student(string fname, string lname, int grade, string phone_num, string address)
{
  f_name = fname;
  l_name = lname;
  this->grade = grade;

  // Print phone number in appropriate format
  string ph_num;
  for (int i=0; i<phone_num.size(); ++i) {
    if (i == 2 || i == 5) {
      ph_num += phone_num[i];
      ph_num += "-";
    } else {
      ph_num += phone_num[i];
    }
  }
  phone = ph_num;
  address = address;
  // Create report card
  ReportCard report;
}

// MEMBER FUNCTIONS
void Student::DisplayStudentInfo()
{
  cout << "\n|##########[Student]##########|\n";
  cout << "First Name: " << f_name << endl;
  cout << "Last Name: " << l_name << endl;
  cout << "Student Grade: " << grade << endl;
  cout << "Phone Number: " << phone << endl;
  cout << "Address: " << address << endl;
}

// TODO: undeclared identifier??
// TODO: Grab grades from reportcard
void Student::DisplayReportCard()
{
  int math_1 = this->report.GetGrade("math", 1);
  cout << "|----------[Report Card]----------|\n";
  cout << "|  Subject  |  First   |   Final  |\n";
  cout << "|---------------------------------|\n";
  cout << "|   Math    |    " << math[0] << "    |    " << math[1] << "     |\n";
  cout << "|  History  |    " << history[0] << "    |    " << history[1] << "     |\n";
  cout << "|  Science  |    " << science[0] << "    |    " << science[1] << "     |\n";
  cout << "|  English  |    " << english[0] << "    |    " << english[1] << "     |\n";
  cout << endl;
}

string Student::GetFirstName()
{
  return f_name;
}

string Student::GetLastName()
{
  return l_name;
}

void Student::SetName(int name_edit)
{
  cout << "Enter name: ";
  string new_name;
  cin >> new_name;

  if (name_edit == 1) {
    f_name = new_name;
  } else {
    l_name = new_name;
  }
}

void Student::SetGrade()
{
  cout << "Enter grade: ";
  int new_grade;
  cin >> new_grade;
  grade = new_grade;
}

void Student::SetPhoneNumber()
{
  cout << "Enter phone number: ";
  string new_phone;
  cin >> new_phone;
  phone = new_phone;
}

void Student::SetAddress()
{
  cout << "Enter new address: ";
  string new_address;
  cin >> new_address;
  address = new_address;
}


// ########################################## 
// REPORT CARD
// ########################################## 
// CONSTRUCTORS
Student::ReportCard::ReportCard()
{
  // First half
  math[0] = 0;
  history[0] = 0;
  science[0] = 0;
  english[0] = 0;
  // Final half
  math[1] = 0;
  history[1] = 0;
  science[1] = 0;
  english[1] = 0;
}

// MEMBER FUNCTIONS
void Student::ReportCard::SetGrades(int period, int mth, int his, int sci, int eng)
{
  math[period] = mth;
  history[period] = his;
  science[period] = sci;
  english[period] = eng;
}

void Student::ReportCard::EditGrades()
{
  string subject;
  int period;
  int grade;
  cout << "Subject: ";
  cin >> subject;
  cout << "Period (1 or 2): ";
  cin >> period;
  cout << "Grade to add: ";
  cin >> grade;


  if (subject == "math")
    math[period] = grade;
  else if (subject == "history")
    history[period] = grade;
  else if (subject == "science")
    science[period] = grade;
  else if (subject == "english")
    english[period] = grade;
}

int Student::ReportCard::GetGrade(string subject, int period)
{
  int grade;
  if (subject == "math")
    grade = math[period];
  else if (subject == "history")
    grade = history[period];
  else if (subject == "science")
    grade = science[period];
  else if (subject == "english")
    grade = english[period];

  return grade;
}
