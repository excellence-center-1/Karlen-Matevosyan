#include <iostream>
using namespace std;

void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print (int arr[], size_t size) {
    cout << "[ ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;
}

int selectionSort (int arr[], size_t size) {
    for (int j = 0; j < size - 1; j++) {
        int min_idx = j;
        for (int i = j + 1; i < size;i++){
            if (arr[i] < arr[min_idx]){
                min_idx = i;
            }
        }
        swap (&arr[min_idx], &arr[j]);
    }
    return 0;
}

int main () {
    int arr [] = {12,64,58,65,48,56,85,4,9,61};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sort: ";
    print(arr,size);

    cout << "After Sort: ";
    selectionSort(arr,size);
    print(arr,size);

    return 0;
}
