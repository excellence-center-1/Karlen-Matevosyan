#include <iostream>
using namespace std;

void swap (char **str1,char **str2){
    char *str = *str1;
    *str1 = *str2;
    *str2 = str;
}

int main () {
    char *str1 = "text1";
    char *str2 = "text2";

    swap(str1,str2);
    cout<<str1<<endl;
    cout<<str2<<endl;
}
