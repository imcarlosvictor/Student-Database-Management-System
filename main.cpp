#include <iostream>
#include <vector>
using namespace std;

int main() 
{
  bool program = true;
  while (program) {
    cout << "\t===== STUDENT REPORT CARD MANAGEMENT SYSTEM =====\n"; 
    cout << endl; 
    cout << endl;
    cout << "\t1. List All Records\n";
    cout << "\t2. Search Student Record\n";
    cout << "\t3. Add New Record\n";
    cout << "\t4. Modify Student Record\n";
    cout << "\t5. Delete Student Record\n";
    cout << "\t6. Exit Record\n";

    cout << "~Select an option: ";
    int choice;
    cin >> choice;

    switch (choice) {
      case 1:
        ListRecord();
        break;
      case 2:
        SearchRecord();
        break;
      case 3:
        AddRecord();
        break;
      case 4:
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
