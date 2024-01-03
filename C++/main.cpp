#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main () {
    string path = "exercises.txt";
    ofstream file;

    file.open(path,ofstream::app);
    if (!file.is_open()) {
        cout << "The file doesnt in this path" << endl;
    }
        else {
            cout << "Enter a number: " << endl;
            int number;
            cin >> number;
            file << number;
        }
}
