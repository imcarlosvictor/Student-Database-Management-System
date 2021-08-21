#include <iostream>
#include <vector>
#include "student.h"
#include "report_card.h"
using namespace std;

void DisplayStudentRecords(vector<Student>);
void SearchStudentRecord(); // Prints Student info and report card
// Student Information
void AddStudentRecord(vector<Student>&);
void ModifyStudentRecord(string, string, vector<Student>&);
void DeleteStudentRecord();
// Report Card
void EditReportCard();
void RemoveStudentRecord();

int main()
{
  vector<Student> database;
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
    cout << "\t\t1. List All Records\n";
    cout << "\t\t2. Search Student Record\n";
    cout << "\t\t3. Add New Record\n";
    cout << "\t\t4. Modify Student Record\n";
    cout << "\t\t5. Delete Student Record\n";
    cout << "\t\t6. Edit Report Card\n";
    cout << "\t\t7. Exit Record\n";

    cout << "~Select an option: ";
    int user_input;
    cin >> user_input;
    switch (user_input)
    {
      case 1:
        // Print all student and report cards
        DisplayStudentRecords(database);
        break;
      case 2:
        // Search for an individual's info and grades
        SearchStudentRecord();
        break;
      case 3:
        // Add a new student
        AddStudentRecord(database);
        break;
      case 4: {
        // Modify a student's info or report card
        string f_name;
        string l_name;
        cout << "Student's first name: ";
        cin >> f_name;
        cout << "Student's last name: ";
        cin >> l_name;
        ModifyStudentRecord(f_name, l_name, database);
        break;
              }
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

void SearchStudentRecord()
{
  ;
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

  Student std(fname, lname, grade, phone, address);
  std.DisplayStudentInfo();

  //TODO: Create a vector to store all existing students records
  //TODO: Determine how to have student point to his/her report card
  database.push_back(std);

}

void ModifyStudentRecord(string f_name, string l_name, vector<Student>& database)
{
  Student std;
  //Run for loop to find student from vector
  for (int i=0; i<database.size(); ++i) {
    if (database[i].getFirstName() == f_name && database[i].getLastName() == l_name) {
      std = database[i];
    }
  }  


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
                string first_name;
                cin >> first_name;
                std.setName(user_input, first_name);
                break;
              }
      case 2: {
                cout << "Enter name: ";
                string last_name;
                cin >> last_name;
                std.setName(user_input, last_name);
                break;
              }
      case 3: {
                cout << "Enter grade: ";
                int new_grade;
                cin >> new_grade;
                std.setGrade(new_grade);
                break;
              }
      case 4:
              {
                cout << "Enter phone number: ";
                string new_phone;
                cin >> new_phone;
                std.setPhoneNumber(new_phone);
                break;
              }
      case 5:
              {
                cout << "Enter new address: ";
                string new_address;
                cin >> new_address;
                std.setAddress(new_address);
              }
      case 6: {
                modify = false;
                break;
              }
      default:
              cout << "Select an option within range.";
    }
  }

  // Display new changes
  std.DisplayStudentInfo();
}

void DeleteStudentRecord()
{
  ;
}
