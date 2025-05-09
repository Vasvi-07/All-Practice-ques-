#include <iostream>
#include <fstream>
using namespace std;
//BINARY FILE READ
struct Person {
char name[50];
int age;
double salary;
};
int main() {
Person person;
// Open binary file for reading
ifstream inFile("person.bin", ios::binary);
if (inFile.is_open()) {
// Read binary data
inFile.read(reinterpret_cast<char*>(&person), sizeof(Person));
// Display the data
cout << "Name: " << person.name << endl;
cout << "Age: " << person.age << endl;
cout << "Salary: " << person.salary << endl;
inFile.close();
} else {
cout << "Failed to open file!" << endl;
}
return 0;
}