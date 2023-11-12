#include <iostream>
#include "template_binary_search.cpp"
using namespace std;

int exponentialSearch(int arr[], size_t size, int value) {
    if (arr[0] == value) {
        return 0;
    }

    int i = 1;
    while (i < size && arr[i] <= value) {
        i = i*2;
    }

    return binarySearch(arr, i/2,i, value);
}


int main() {

    int arr[] = {2,3,5,9,15,19,25,35};

    size_t size = sizeof(arr)/ sizeof(arr[0]);
    int value = 19;
    int result = exponentialSearch(arr, size, value);

    if (result == -1) {
        cout <<"Element " << value << " Isn`t Found..." << endl;
    } else {
        cout <<"Element " << value << " Is Found At Index " << result << endl;
    }
    return 0;
}

