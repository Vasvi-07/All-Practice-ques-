#include <iostream>
using namespace std;


int sumOfDigits(int n) {

    if (n == 0) {
        return 0;
    }
 //recursive
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        int result = sumOfDigits(num);
        cout << "The sum of the digits is: " << result << endl;
    }

    return 0;
}
