#include <iostream>
using namespace std;

int main() {
    int const size = 5;

    int arr[size];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Elements whose 1st digit is greater than last digit: " << endl;
    for (int i = 0; i < size; ++i) {
        int num = arr[i];

        int firstDigit = 0;
        while (num != 0) {
            firstDigit = num % 10;
            num /= 10;
        }

        int lastDigit = arr[i] % 10;
        if (firstDigit > lastDigit) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}

