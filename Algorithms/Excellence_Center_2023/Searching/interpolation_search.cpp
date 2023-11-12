#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int low, int high, int value) {
    int pos;
    if (low <= high && arr[low] <= value <= arr[high]) {
        pos = low + ((high - low) / (arr[high] - arr[low])) * (value - arr[low]);

        if (arr[pos] == value) {
            return pos;
        }

        if (arr[pos] < value) {
            return interpolationSearch(arr, pos + 1, high, value);
        }

        if (arr[pos] > value) {
            return interpolationSearch(arr, low, pos - 1, value);
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 12, 13, 16, 18, 19, 20};

    size_t size = sizeof(arr) / sizeof(arr[0]);

    int value = 18;
    int index = interpolationSearch(arr, 0, size - 1, value);

    if (index != -1) {
        cout << "Element " << value << " Found At Index " << index << endl;;
    }
    else {
        cout << "Element Not Found..." << endl;
    }

    return 0;
}
