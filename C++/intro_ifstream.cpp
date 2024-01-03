#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main () {
    string path = "exercises.txt";
    ifstream file;

    file.open(path);
    if (!file.is_open()) {
        cout << "The file doesnt consist in this path" << endl;
    }
        else {
            cout << "File Opened!" << endl;
            string str;

            while (!file.eof()) {
                str = "";
                getline(file, str);
                cout << str << endl;
            }
        }
    file.close();
}
