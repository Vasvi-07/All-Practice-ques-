#include <iostream>
using namespace std;
int main() {
try {
// Code that might throw an exception
int dividend = 10;
int divisor = 0;
if (divisor == 0) {
throw runtime_error("Division by zero!");
}
int result = dividend / divisor;
cout << "Result: " << result << endl;
}
catch (const runtime_error& e) {
// Code to handle the exception
cerr << "Error: " << e.what() << endl;
}
cout << "Program continues after exception handling." << endl;
return 0;
}