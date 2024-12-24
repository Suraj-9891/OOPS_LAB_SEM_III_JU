#include <iostream>
#include <fstream> // for file handling
using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, this is a file handling example in C++!" << endl;
        outFile << "File handling is simple and useful." << endl;
        outFile.close();
        cout << "Data written to file successfully!" << endl;
    } else {
        cout << "Unable to open the file for writing!" << endl;
    }

    // Reading from a file
    ifstream inFile("example.txt");
    string line;
    if (inFile.is_open()) {
        cout << "Reading data from file:" << endl;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open the file for reading!" << endl;
    }

    return 0;
}
