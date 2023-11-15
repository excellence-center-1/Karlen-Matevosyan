#include <iostream>
using namespace std;

int main() {
    int n;
    int b;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the number you want to compare with: ";
    cin >> b;
    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    float average = 0;
    float sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > b) {
            sum += arr[i];
            count++;
        }
    }
    cout << sum << endl;
    cout << count << endl;
    average = sum / count;
    cout << "The average of the elements - " << average << endl;

    return 0;
}

