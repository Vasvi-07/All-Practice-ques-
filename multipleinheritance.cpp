#include <iostream>
using namespace std;

class A {
    protected:
    int first;
    public:
    A()
    {
        cout << " Class A";
    }
    void display()
    {
        cout << first;
    }
};

class B: public A {
    protected:
    int second;
    public:
    B()
    {
        cout << " Class B";
    }
    void display()
    {
        cout << second;
        cout << first;
    }
}; // Jis seq me inherit kra h usi m last m output aayega if a, b then a,b

class C: public A { //example of multiple inheritance
    protected:
    int third;
    public:
    C()
    {
        cout << " Class C";
    }
    void display()
    {
        cout << first;
        cout << third;
    }
};
class D: public B, public C {
    protected:
    int fourth;
    public:
    D()
    {
        cout << " Class D";
    }
    void display()
    {
        cout << first << endl ;
        cout << second <<endl ;
        cout << third << endl ;
        cout << fourth << endl ;
    }
};

int main (){
    D d;
    d.display(); //gives garbage value
    
}