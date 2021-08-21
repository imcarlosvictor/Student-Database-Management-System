#include <iostream>
#include <vector>
#include "student.h"
#include "report_card.h"
using namespace std;

void ListAllStudentRecords();
void SearchStudentRecord(); // Print Student info and report card
// Student Information
void AddStudentRecord();
void ModifyStudentRecord();
void DeleteStudentRecord();
// Report Card
void EditReportCard();
void RemoveStudentRecord();

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
    cout << "\t\t6. Edit Report Card\n";
    cout << "\t\t7. Exit Record\n";

    cout << "~Select an option: ";
    int choice;
    cin >> choice;

    switch (choice) 
    {
      case 1:
        // Print all student and report cards
        ListAllStudentRecords();
        break;
      case 2:
        // Search for an individual's info and grades
        SearchStudentRecord();
        break;
      case 3:
        // Add a new student
        AddStudentRecord();
        break;
      case 4:
        // Modify a student's info or report card
        ModifyStudentRecord();
        break;
      case 5:
        DeleteStudentRecord();
        break;
      case 6:
        break;
      case 7:
        program = false;
        break;
      default:
        cout << "Enter a number within range" << endl;
        continue;
    }
  }
  return 0;
}

void ListAllStudentRecords()
{
  ;
}

void SearchStudentRecord()
{
  ;
}

void AddStudentRecord()
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

  //TODO: Create a vector to store all existing students records
  Student std(fname, lname, grade, phone, address);
  std.PrintStudentInfo();
}

void ModifyStudentRecord(Student& student)
{
  bool modify = true;
  while (modify) {
    cout << "\n|----------[Edit Record]----------|\n";
    cout << "1. First name\n";
    cout << "2. Last name\n";
    cout << "3. Grade\n";
    cout << "4. Phone number\n";
    cout << "5. Address\n";
    cout << "6. Exit\n";

    int user_input;
    cin >> user_input;

    switch (user_input) {
      case 1: {
                cout << "Enter name: ";
                string new_name;
                getline(cin, new_name);
                student.setName(user_input, new_name);
                break;
              }
      case 2: {
                cout << "Enter name: ";
                string new_name;
                getline(cin, new_name);
                student.setName(user_input, new_name);
                break;
              }
      case 3: {
                cout << "Enter grade: ";
                int new_grade;
                cin >> new_grade;
                student.setGrade(new_grade);
                break;
              }
      case 4:
              {
                cout << "Enter phone number: ";
                string new_phone;
                cin >> new_phone;
                student.setPhoneNumber(new_phone);
                break;
              }
      case 5:
              {
                cout << "Enter new address: ";
                string new_address;
                cin >> new_address;
                student.setAddress(new_address);
              }
      case 6:
              modify = false;
              break;
      default:
              cout << "Select an option within range.";
    }
  }
}

void DeleteStudentRecord()
{
  ;
}
