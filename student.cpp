#include "student.h"

// Constructors
Student::Student(string fname, string lname, int grade, string phone, string address) 
{
  f_name = fname;
  l_name = lname;
  grade = grade;
  phone = phone;
  address = address;
}

// Methods
void Student::PrintStudentInfo() 
{
  cout << "First Name: " << f_name << endl;
  cout << "Last Name: " << l_name << endl; 
  cout << "Student Grade: " << grade << endl;
  cout << "Phone Number: ";
  // Print phone number in appropriate format
  for (int i=0; i<phone.size(); ++i) {
    if (i == 2 || i == 5 || i == 8) {
      cout << phone[i] << "-";
    } else {
      cout << phone[i];
    }
  }
  cout << "Address: " << address;
}

void Student::setName() 
{
  cout << "Edit:\n1. First name\n2.Last Name" << endl;
  int input;
  cin >> input;
  if (input == 1) {
    cout << "Enter name: ";
    string first_name;
    cin >> first_name;
    // Change first name
    f_name = first_name;
  } else {
    cout << "Enter name: ";
    string last_name;
    cin >> last_name;
    // Change last name
    l_name = last_name;
  }
}

void Student::setGrade() 
{ 
  cout << "Enter grade: ";
  int new_grade;
  grade = new_grade; 
}

void Student::setPhoneNumber() 
{
  cout << "Enter new phone number: ";
  string new_phone_who_dis;
  cin >> new_phone_who_dis;
  phone = new_phone_who_dis;
}

void Student::setAddress() 
{
  cout << "Enter new address: ";
  string new_address;
  cin >> new_address;
  address = new_address;
}
