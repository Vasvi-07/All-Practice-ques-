#include <iostream>
using namespace std;

class A {
    public:
    void display()
    {
        cout << "HELLO"<< endl;
    }
};
class B: public A {
    public:
    void display()
    {
        cout << "HOW ARE YOU?"<< endl;
    }
};
int main (){
    B b;
    b.display(); 
    b.A::display();
}
//first it prints how are you, why not hello?
//ambiguoity occurs causing it to call derived class first so ir printed hru only.

