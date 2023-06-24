#include <iostream>
#include <string.h>
using namespace std;

char* strtok(char* str, const char delimiters);

int main() {
    char str[] = "Introduction ,About ,Strtok ,C++";
    char delimiter[] = ",";

    cout << "The Tokens In a String Are: " << endl;

    char* token = strtok(str, delimiter);

    while (token) {
        char* dynamicToken = new char[strlen(token) + 1];

        strcpy(dynamicToken, token);

        cout << dynamicToken << endl;

        delete[] dynamicToken;

        token = strtok(NULL, delimiter);
    }

    return 0;
}

