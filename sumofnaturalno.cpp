#include <iostream>
using namespace std;

int sumOfNaturalNumber(int n) {
   
    if (n == 0) {
        return 0;
    }
  
    return n + sumOfNaturalNumber(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        int result = sumOfNaturalNumber(n);
        cout << "The sum of the first " << n << " natural numbers is: " << result << endl;
    }

    return 0;
}
