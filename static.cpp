#include <iostream>
using namespace std;

class MyClass{
    public:
    int count= 0;

    MyClass (){
        count++;
    
    }
    void showCount(){
        cout <<"Count:"<< count<< endl;
    }

};
//int MyClass::count = 0;
int main(){
    MyClass ob1;
    ob1.showCount();
    MyClass ob2;
    ob2.showCount();
}