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

