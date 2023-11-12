#include <iostream>
using namespace std;

void print (int arr[], size_t size) {
    cout << "[ ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;
}

int insertionSort (int arr[], size_t size) {
    for (int i = 1; i < size; i++){
        int key = arr[i];
        int j = i-1;
        while (key < arr[j] && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    return 0;
}

int main () {
    int arr[] = {18,25,1,64,21,85,218,48};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sort: ";
    print(arr,size);

    cout << "After Sort: ";
    insertionSort(arr,size);
    print(arr,size);

    return 0;
}
