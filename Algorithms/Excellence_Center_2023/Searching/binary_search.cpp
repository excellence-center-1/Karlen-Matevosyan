#include <iostream>
using namespace std;

int binarySearch(int arr[],int left, int right,int value) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == value)
            return mid;

        if (arr[mid] < value) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {3, 4, 5, 6, 7, 8, 9};
    int value = 4;

    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr,0, size - 1,value);

    if (result == -1)
        cout << "Not found";
    else
        cout << "Element " << value << " Is Found At Index " << result << endl;
}
