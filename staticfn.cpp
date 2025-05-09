#include <iostream>
using namespace std;
class MyClass{
    public:
    void displayMessage(){
        cout << "This is a static fn."<<endl;
    }
};
int main ()
{
    MyClass::displayMessage();
}