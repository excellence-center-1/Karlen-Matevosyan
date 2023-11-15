#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 10 == 5) {
            sum += arr[i];
            count++;
        }
    }

    cout << "Sum of the elements - " << sum << endl;
    cout << "Number of elements ending with 5 - " << count << endl;

    return 0;
}

