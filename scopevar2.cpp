#include <iostream>
using namespace std;
int update()
{
 
    static int x=10;

    x++;
  
   
    return x;

}
 int main()
 {
    int y = update();
    cout<<y<<endl;
    y = update();
    cout <<y;

 }