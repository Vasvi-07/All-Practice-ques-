//parametrized constructor
#include <iostream>
using namespace std;

class Car{
    public:
    string brand;
    int year;

    //parametrized constructor
    Car(string mers,int y){
        brand = mers;
        year = y;
    }
    void display(){
        cout <<"brand:"<< brand << "year:"<< year <<endl;
    }
};
int main (){
    Car car1 ("Toyota ", 2020); //paramterized constructor called
    car1.display();//output brand and year

    return 0;
}
