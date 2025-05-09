#include <iostream>
#include <fstream>
using namespace std;
//READING CHARACTER BY CHARACTER
int main(){
    ifstream inFile("example.txt");

    if (inFile.is_open()){
       string word;
    while (inFile>>word){
      cout << word << " ";
    }
    
    inFile.close();
    } else {
        cout <<"Failed to open file!"<< endl;
    }
    return 0;
}