#include <iostream>
using namespace std;
class Car{
    public:
    string brand;
    int year;

    //default constructor
    //Car(){
      //  brand = "toyota";
       // year = 2023;
    //}
    void display(){
        cout << "Brand: "<< brand<< ", Year :"<< year << endl;
    }
};
 int main (){
Car car1; //default constructor called automatically
car1.display(); //output brand unknown year 0

Car car2;
car2.display();
return 0;
 }
 