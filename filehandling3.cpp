#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
//READING THE ENTIRE FILE
int main(){
    ifstream inFile("example.txt");

    if (inFile.is_open()){
        stringstream buffer; //read entire string stream
        buffer <<inFile.rdbuf();
        string content = buffer.str();
    cout <<"File content"<<endl;
    cout << content <<endl;

    inFile.close();
    } else {
        cout <<"Failed to open file!"<< endl;
    }
    return 0;
}