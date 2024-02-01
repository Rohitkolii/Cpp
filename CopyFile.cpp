#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream onFile;
    ifstream inFile;
    char str;
    // onFile.open("C:\\Users\\aa\\Desktop\\try.txt");
    inFile.open("C:\\Users\\aa\\Desktop\\try.txt");
    onFile.open("C:\\Users\\aa\\Desktop\\try2.txt");
    while(inFile.get(str)){
        onFile.put(str);
    }
    inFile.close();
    onFile.close();
}