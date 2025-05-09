#include <iostream>
using namespace std;

class Student
{
    int rollno;
    string name;
    float percentage;

    public:
    void Get(int a, string b, float c)
    {
      //  cout << "Provide your Roll no.: ";
      //  cin >> rollno;
       // cout << "Provide your name: ";
       // cin >> name;
       // cout << "Enter marks percentage: ";
      //  cin >> percentage;
    //}
       rollno= a;
       name = b;
       percentage = c;
    }
    void Display ()
    {
        cout << "Roll no.: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << endl;
    }
};

int main()
{
    Student s1;
    s1.Get(10,"vasvi", 45);
    s1.Display();
    return 0;
}

