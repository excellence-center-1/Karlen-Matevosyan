#include <iostream>
using namespace std;

void print (int arr[],size_t size) {
    cout << "[ ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;
}

int bubbleSort (int arr[],size_t size) {
    for (int j = 0; j < size - 1; j++) {
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    return 0;
}

int main () {
    int arr[] = {15,45,3,21,56,7};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sort: ";
    print(arr,size);

    cout << "After Sort: ";
    bubbleSort(arr,size);
    print(arr,size);
}
