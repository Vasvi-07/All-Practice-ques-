#include <iostream>
using namespace std;

//base class
class Animal {
    public:
    string name;
    int age;
public:
Animal (string name, int age) : name(name), age(age) {} //using for declaring CONSTRUCTOR
void eat () {
    cout << name << " is eating"<< endl;

}
void sleep () {
    cout << name << " is sleeping " << endl;

}
};
//derived class  inherited
class Dog : public Animal {
    private:
    string breed;
    public:
    Dog ( string name, int age, string breed)
    : Animal ( name, age), breed(breed){}
    

    void bark(){
        cout << name <<"(" << breed << ") is barking. " <<endl;
    }
    void display(){
        cout << "NAME:" <<name<<endl;
        cout << "AGE:" <<age<<endl;
        cout << "BREED:" <<breed<<endl;
    }

};
int main (){
    Dog dog ("BUNNY", 3, "Chowchow");
    dog.display();
    dog.eat();
    dog.sleep();
    dog.bark();
    return 0;

}