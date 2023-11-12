#include <iostream>
using namespace std;
  
int ternarySearch(int left, int right, int key, int arr[])
{
    if (right >= left) {
  
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;
  
        if (arr[mid1] == key) {
            return mid1;
        }
        if (arr[mid2] == key) {
            return mid2;
        }
  
        if (key < arr[mid1]) {
  
            return ternarySearch(left, mid1 - 1, key, arr);
        }
        else if (key > arr[mid2]) {
  
            return ternarySearch(mid2 + 1, right, key, arr);
        }
        else {
  
            return ternarySearch(mid1 + 1, mid2 - 1, key, arr);
        }
    }
  
    return -1;
}
  
int main()
{
    int left, right, result, key;
  
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  
    left = 0;
  
    right = 9;
  
  
    key = 5;
  
    result = ternarySearch(left, right, key, arr);
  
    cout << "Index of " << key
         << " is " << result << endl;
  
}
