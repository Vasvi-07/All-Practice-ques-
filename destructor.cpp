#include <iostream>
using namespace std;
//by default , copy and default cnstructor is called
class Student
{
    int rollNo;
    string name;
    float percent;

    public:
    Student(int r, string n, float p)
    {
        rollNo = r;
        name = n;
        percent = p;
    }
    void display();
    ~Student () //destructor
    {
        cout<<" DESTRUCTOR CALLED"<<endl;
    }
};
          //Slope resolution operator
void Student::display() 
{
    cout <<rollNo;
    cout <<name;
    cout <<percent;

}
int main ()
{
    Student Student(3 , " NCU ", 96);
    Student.display();
}


