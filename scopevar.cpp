#include <iostream>
using namespace std;
int x = 20;
int update()
{
    //int x=10;

    x++;
    cout<<x;
   
    return 0;

}
 int main()
 {
    update();
    cout<<x;
 }