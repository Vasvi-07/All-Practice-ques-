
#include <iostream>
using namespace std;

template <typename T>
T add (T a, T b){
    return a + b;
}
int main (){
    int sum_int = add(5,10);
    double sum_double = add (5.5, 10.5);
    return 0;
}