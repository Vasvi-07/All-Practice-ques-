#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream outFile("example.txt");

    if (outFile.is_open()){
        cout <<"File opened succesfully! "<< endl;
    }
    else {
        cout <<"Failed to open file!"<< endl;
    }
    return 0;
}