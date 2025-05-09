#include <iostream>
#include <fstream>
using namespace std;
//READING CHARACTER BY CHARACTER
int main(){
    ifstream inFile("example.txt");

    if (inFile.is_open()){
        char ch;
        int c=0;
    while (inFile.get(ch)){
       // cout << ch; 
       if ( ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u') c++;
    }
    cout <<c;
    inFile.close();
    } else {
        cout <<"Failed to open file!"<< endl;
    }
    return 0;
}