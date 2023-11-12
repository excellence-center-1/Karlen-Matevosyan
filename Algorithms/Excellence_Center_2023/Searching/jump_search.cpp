#include <iostream>
#include <cmath>
using namespace std;

int jumpSearch(int arr[], int size, int value) {
    int low = 0;
    int high = sqrt(size); 

    while(arr[high] <= value && high < size) {
        low = high;
        high += sqrt(size);

        if(high > size - 1) {
            high = size; 
        }
    }

    for(int i = low; i<high; i++) { 
        if(arr[i] == value)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {2,3,8,14,25,32,35,41,49};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 32;

    int result = jumpSearch(arr, size, value);

    (result == -1) ? cout << "Item Is Not Found... " : cout << "Item found at index: " << result << endl;
}

