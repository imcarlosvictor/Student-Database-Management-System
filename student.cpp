#include "student.h"

// Constructors
Student::Student() {
  f_name = "";
  l_name = "";
  this->grade = 0;
  phone = "";
  address = "";
}

Student::Student(string fname, string lname, int grade, string phone_num, string address) 
{
  f_name = fname;
  l_name = lname;
  this->grade = grade;
  address = address;
  
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
}

// Methods
void Student::PrintStudentInfo() 
{
  cout << "\n|----------[Student]----------|\n";
  cout << "First Name: " << f_name << endl;
  cout << "Last Name: " << l_name << endl; 
  cout << "Student Grade: " << grade << endl;
  cout << "Phone Number: " << phone << endl;
  cout << "Address: " << address << endl;
}

void Student::setName(int name_edit, string new_name) 
{
  if (name_edit == 1) {
    f_name = new_name;
  } else {
    l_name = new_name;
  }
}

void Student::setGrade(int new_grade) 
{ 
  grade = new_grade; 
}

void Student::setPhoneNumber(string new_phone) 
{
  phone = new_phone;
}

void Student::setAddress(string new_address) 
{
  address = new_address;
}
