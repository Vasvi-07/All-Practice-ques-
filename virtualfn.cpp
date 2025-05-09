#include <iostream>
using namespace std;
//ISSUE OF POLYMORPHISM DURING OVERLOADING
//not to be called by parent (base) but to be called by your name(Derived) so we used virtual ifo base class.
class Base {
    public:
    virtual void display (){
    cout << "Display method of base class." << endl;
    }
    };
    class Derived : public Base {
    public:
    void display () override {
    cout << "Display method of derived class." << endl;
    }
};
int main (){
    Base*basePtr; //basePtr is object, class pointer, pass address
    Derived derivedObj; // pointing object of derived class
    basePtr = &derivedObj; // base ptr given address of derived obj
    basePtr -> display();
    return 0;
}
//before adding virtual in base class, base class is called but when added virtual in front of base class it calls derived class