#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream outFile("example.txt", ios::app);

    if (outFile.is_open()){
        outFile << "Hello, World!" <<endl;
        outFile << "This is a line of text."<<endl;
        outFile << "Numbers can be written too:"<< 42 <<endl;
        outFile.close();
        cout <<"Data written to file succesfully! "<< endl;
    }
    else {
        cout <<"Failed to open file!"<< endl;
    }
    return 0;
}