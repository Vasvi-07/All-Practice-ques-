#include <iostream>
using namespace std;
 
class Car
{
  private:
  int model;
  string color;


//member function
public:
void input ()
{
    cout <<"provide model number"<<endl;
    cin >> model;
    cout << "provide color"<<endl;
    cin >> color;

} 

void display()
{
    cout <<"model:"<<model<<endl;
    cout <<"color:"<<color<<endl;

 }
};

int main()
{
    Car maruti;
    maruti.input();
    maruti.display();
    Car tata;
    tata.input();
    tata.display();
    Car mercedes;
    mercedes.input();
    mercedes.display();

}

//access specifier public,private,protected
// no one can use pvt
//some people selected ones pvt
// anyone use public
