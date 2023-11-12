#include <iostream>
using namespace std;

int ternarySearch(int arr[], int left, int right, int value) {
    if (right >= left) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (arr[mid1] == value) {
            return mid1;
        }

        if (arr[mid2] == value) {
            return mid2;
        }

        if (value < arr[mid1]) {
            return ternarySearch(arr, left, mid1 - 1, value);
        }
        else if (value > arr[mid2]) {

            return ternarySearch(arr, mid2 + 1, right, value);
        }
        else {

            return ternarySearch(arr, mid1 + 1, mid2 - 1, value);
        }
    }

    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int value = 5;
    int result = ternarySearch(arr,0,size - 1, value);

    cout << "Index Of " << value << " Is " << result << endl;

}
