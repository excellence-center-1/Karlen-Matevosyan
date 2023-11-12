#include <iostream>
using namespace std;

void print (int arr[],size_t size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void shellSort(int arr[], int size) {
    for (int interval = size / 2; interval > 0; interval /= 2) {
        for (int i = interval; i < size; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= interval && arr[j - interval] > temp; j -= interval) {
                arr[j] = arr[j - interval];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    int arr[] = {15,-6,23,4,0,35,42,99};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sort: ";
    print(arr,size);

    shellSort(arr, size);
    cout << "After Sort: ";
    print(arr,size);

    return 0;
}

