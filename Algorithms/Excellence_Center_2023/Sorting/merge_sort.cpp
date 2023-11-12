#include <iostream>
using namespace std;

void print (int arr[], int size) {
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
}

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int temp_left[n1];
    int temp_right[n2];

    for (int i = 0; i < n1; i++) {
        temp_left[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        temp_right[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (temp_left[i] <= temp_right[j]) {
            arr[k] = temp_left[i];
            i++;
        } else {
            arr[k] = temp_right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = temp_left[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = temp_right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    print(arr,size);

    mergeSort(arr, 0, arr_size - 1);

    cout << "Sorted array: ";
    print(arr,size);    

    return 0;
}

