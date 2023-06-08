#include <iostream>
using namespace std;

int main () {
    char palindrome [15] = "";                                    
    char reverse_palindrome [15] = "";
    int size = sizeof(palindrome) / sizeof(palindrome[0]);
    cout<<"Enter Anything In <string> Format: ";
    cin>>palindrome;

    for (int i = size; i >= 0;i--){
        cout<<palindrome[i];
    }
    cout<<endl;
    cout<<palindrome<<endl;
    cout<<reverse_palindrome<<endl;
}
