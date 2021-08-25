#include <iostream>
#include <vector>
#include "student.h"
using namespace std;

// Student Information
void DisplayStudentRecords(vector<Student>);
Student SearchStudentRecord(vector<Student>);
void AddStudentRecord(vector<Student>&);
void ModifyStudentRecord(Student&);
void DeleteStudentRecord();
// Report Card
void EditReportCard();
void RemoveStudentRecord();


int main()
{
  vector<Student> database;
  //Populate database
  Student std1("Carlos", "Torres", 8, "6478812154", "Homeboi");
  Student std2("Marko", "Polo", 8, "6479112154", "Homeboi");
  database.push_back(std1);
  database.push_back(std2);

  bool program = true;
  while (program)
  {
    cout << "\n\t===== STUDENT REPORT CARD MANAGEMENT SYSTEM =====\n";
    cout << endl;
    cout << endl;
    cout << "\t\t1. Display Database Records\n";
    cout << "\t\t2. Search Student Record\n";
    cout << "\t\t3. Add New Record\n";
    cout << "\t\t4. Modify Student Record\n";
    cout << "\t\t5. Delete Student Record\n";
    cout << "\t\t6. Exit Record\n\n";

    cout << "~Select an option: ";
    int user_input;
    cin >> user_input;
    switch (user_input)
    {
      case 1:
        {
          // Print all student and report cards
          DisplayStudentRecords(database);
          break;
        }
      case 2: 
        {
          // Search for an individual's info and grades
          Student student = SearchStudentRecord(database);
          student.DisplayStudentInfo();
          break;
        }
      case 3:
        {
          AddStudentRecord(database);
          break;
        }
      case 4: 
        {
          Student student = SearchStudentRecord(database);
          ModifyStudentRecord(student);
          break;
        }
      case 5:
        {
          DeleteStudentRecord();
          break;
        }
      case 6:
        {
          program = false;
          break;
        }
      default:
        cout << "Enter a number within range" << endl;
        continue;
    }
  }
  return 0;
}


// ####################################################
// Functions
// ####################################################
void DisplayStudentRecords(vector<Student> database)
{
  cout << "\n|----------[Database Records]----------|\n";
  for (int i=0; i<database.size(); ++i) {
    database[i].DisplayStudentInfo();
    cout << endl;
  }
}

Student SearchStudentRecord(vector<Student> database)
{
  string f_name, l_name;
  cout << "First name: ";
  cin >> f_name;
  cout << "Last Name: ";
  cin >> l_name;

  // Finds the student record whose first and last name
  // matches the arguements
  Student std;
  for (int i=0; i<database.size(); ++i) {
    if (database[i].GetFirstName() == f_name && database[i].GetLastName() == l_name) {
      std = database[i];
    }
  }
  return std;
}

void AddStudentRecord(vector<Student>& database)
{
  string fname;
  string lname;
  int grade;
  string phone;
  string address;

  cout << "First name: ";
  cin >> fname;
  cout << "Last name: ";
  cin >> lname;
  cout << "Grade: ";
  cin >> grade;
  cout << "Phone: ";
  cin >> phone;
  cout << "Address: ";
  cin >> address;
  cout << endl;

  // Creates student
  Student std(fname, lname, grade, phone, address);
  // Creates student's report card
  Student::ReportCard std_report;
  // Pass reference to the report card
  std.SetReportCard(std_report);
  // Add Student to database
  database.push_back(std);
  // Display Student Info
  std.DisplayStudentInfo();
  std_report.DisplayReportCard();
}

void ModifyStudentRecord(Student& std)
{
  // Navigation tab for modifying student record
  bool modify = true;
  while (modify) {
    cout << "\n|----------[Edit Record]----------|\n";
    cout << "1. Edit First name\n";
    cout << "2. Edit Last name\n";
    cout << "3. Edit Grade\n";
    cout << "4. Edit Phone number\n";
    cout << "5. Edit Address\n";
    cout << "6. Edit Report Card Grades\n";
    cout << "7. Exit\n\n";

    cout << "~Select an option: ";
    int user_input;
    cin >> user_input;

    switch (user_input) {
      case 1: 
        {
          std.SetName(user_input);
          break;
        }
      case 2: 
        {
          std.SetName(user_input);
          break;
        }
      case 3: 
        {
          std.SetGrade();
          break;
        }
      case 4:
        {
          std.SetPhoneNumber();
          break;
        }
      case 5:
        {
          std.SetAddress();
        }
      case 6:
        {
          // Get student's report card
          Student::ReportCard report = std.GetReportCard();
          report.EditGrades();
          break;
        }
      case 7: 
        {
          modify = false;
          break;
        }
      default:
        cout << "Select an option within range.";
    }
    std.DisplayStudentInfo();
  }
}

void DeleteStudentRecord()
{
  ;
}
