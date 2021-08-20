#include <iostream>
#include <vector>
#include "student.h"
#include "report_card.h"
using namespace std;

void ListAllRecords();
void SearchRecord();
void AddRecord();
void ModifyRecord();
void DeleteRecord();

int main() 
{
  bool program = true;
  while (program) 
  {
    cout << "\n\t===== STUDENT REPORT CARD MANAGEMENT SYSTEM =====\n"; 
    cout << endl; 
    cout << endl;
    cout << "\t\t1. List All Records\n";
    cout << "\t\t2. Search Student Record\n";
    cout << "\t\t3. Add New Record\n";
    cout << "\t\t4. Modify Student Record\n";
    cout << "\t\t5. Delete Student Record\n";
    cout << "\t\t6. Exit Record\n";

    cout << "~Select an option: ";
    int choice;
    cin >> choice;

    switch (choice) 
    {
      case 1:
        // Print all student and report cards
        ListAllRecords();
        break;
      case 2:
        // Search for an individual's info and grades
        SearchRecord();
        break;
      case 3:
        // Add a new student
        AddRecord();
        break;
      case 4:
        // Modify a student's info or report card
        ModifyRecord();
        break;
      case 5:
        DeleteRecord();
        break;
      case 6:
        program = false;
        break;
      default:
        cout << "Enter a number within range" << endl;
        continue;
    }
  }
  return 0;
}

void ListAllRecords()
{
  ;
}

void SearchRecord()
{
  ;
}

void AddRecord()
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

  Student stud(fname, lname, grade, phone, address);
  // Create a Report card as well

  stud.PrintStudentInfo();
}

void ModifyRecord()
{
  ;
}

void DeleteRecord()
{
  ;
}
