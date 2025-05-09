#include <iostream>
using namespace std;

class Employee 
{
    public:
    string name;
    int e_id;
    float experience;

   
   Employee() //default
    {
        name = "XYZ";
        e_id = 0;
        experience = 0.0 ;
    }
    Employee(string n,int e, float exp) { //parameterized
        name = n;
        e_id = e;
        experience = exp;
    }
    


void display() {
    cout << "Name: " << name << endl;
    cout << "Employee id : " << e_id << endl;
    cout << "Experience " << experience << endl;
}
};

class Manager : public Employee{ //to access

    public:
        string department;
        string project;
        float experience;
        float bsalary;
        float calculation()
        {
            if (experience > 7)
            bsalary = 70000;
            else if ( experience >= 5)
            bsalary= 50000;
            else 
            bsalary = 30000;
            return bsalary;
        }


Manager ()
{
    department = "Unknown";
    project = "Unknown";
    experience = 0.0;
    bsalary = 0.0;
}
void display() {
    cout << "Department " << department << endl;
    cout << "project : " << project << endl;
    cout << "Experience " << experience << endl;
    cout << "Salary : " << bsalary << endl;
}

};
int main(){
  Employee emp;
  emp.display();
  Manager manager;
  cout << manager.calculation ();
  emp.e_id;
 // emp.department;
  manager.e_id;

  Employee employee("Vasvi", 210, 5.7 years );
    cout << "Details of person2 :\n";
    employee.display();
   
    }

