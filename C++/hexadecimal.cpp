#include<iostream>
using namespace std;

int main ()
{
    int num, temp, i = 1,remainder;
    char hex[50];
    cout << "Enter a Decimal Number: ";
    cin >> num;
    temp = num;
    while (temp != 0){
        remainder = temp % 16;
        if (remainder < 10)
            hex[i++] = remainder + 48;
        else
            hex[i++] = remainder + 55;
        temp = temp / 16;
    }

    cout << "Hexadecimal Of " << num << " is: ";
    for (int j = i; j > 0; j--)
        cout << hex[j];
cout<<endl;
    return 0;
}
