#include <iostream>
#include <string.h>
using namespace std;

char *strtok(char *str,const char delimiters);

int main() {
    char str [] = "Introduction ,About ,Strtok ,C++";
    char delimiter[] = ",";

    cout<<"The Tokens In a String Are: "<<endl;
    char *token = strtok(str,delimiter);

    while (token){
        cout<<token<<endl;
        token = strtok(NULL,delimiter);
    }
    return 0;
}
