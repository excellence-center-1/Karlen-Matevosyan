#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int value) {
    for (int i = 0; i < size; i++)
        if (arr[i] == value)
            return i;
    return -1;
}

int main() {
    int arr[] = {15,2,36,84,52,27};
    int value = 36;

    int size = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, size, value);

    (result == -1) ? cout << "Element not found" : cout << "Element " << value << " Is Found At Index: " << result << endl;
}
