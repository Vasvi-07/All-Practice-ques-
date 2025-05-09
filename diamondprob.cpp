#include <iostream>
using namespace std;
class A {
public:
int a;
A() : a(10) { // here we wrote a = 10
cout << "A constructor called" << endl;
}
};
// Without virtual inheritance
class B1 : public A {
public:
B1() {
cout << "B1 constructor called" << endl;
}};
class C1 : public A {
public:
C1() {
cout << "C1 constructor called" << endl;
}
};
class D1 : public B1, public C1 {
public:
D1() {
cout << "D1 constructor called" << endl;
}
// Problem: D1 has two copies of A
void display() {
// cout << "a = " << a; // Error: ambiguous
cout << "B1's a = " << B1::a << endl;
cout << "C1's a = " << C1::a << endl;
}
};

// With virtual inheritance ( it is used to just copy 1 derived class and not more than 1 copy)
class B2 : virtual public A {
public:
B2() {
cout << "B2 constructor called" << endl;
}
};
class C2 : virtual public A {
public:
C2() {
cout << "C2 constructor called" << endl;
}
};
class D2 : public B2, public C2 {
public:
D2() {
cout << "D2 constructor called" << endl;
a = 30; // Can access 'a' directly now
}
void display() {
cout << "a = " << a << endl; // Now unambiguous

}};
int main() {
cout << "Without virtual inheritance:" << endl;
D1 d1;
d1.display();
cout << "\nWith virtual inheritance:" << endl;
D2 d2;
d2.display();
return 0;
}