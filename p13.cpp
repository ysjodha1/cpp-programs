#include <iostream>
#include <iomanip>
using namespace std;
 
class Employee {
  private:
    int emp_id;
    double salary;
 
  public:
    Employee() {
      this->emp_id = this->salary = 0;
    }
 
    Employee(int id, double sal) {
      this->emp_id = id;
      this->salary = sal;
    }
 
    void putData() {
      cout << setw(16) << this->emp_id;
      cout << setw(16) << this->salary;
    }
};
 
int main() {
 
  int n;
  cout << "Number of Employees to add: ";
  cin >> n;
  Employee employees[n];
  int id;double salary;
 
  for (int i = 0; i < n; i++) {
    cout << "\nEnter Employee ID: ";
    cin >> id;
    cout << "Enter Employee salary: ";
    cin >> salary;
   
    employees[i] = Employee(id, salary);
  }
 
  cout << "\t\tEmployees' data: " << endl;
  cout << "==================================================" << endl;
  cout << setw(16) << "ID" << setw(16) << "Salary" << endl;
  cout << "==================================================" << endl;
 
  for (int i = 0; i < n; i++) {
    employees[i].putData();
    cout << endl;
  }
 
  return 0;
}
