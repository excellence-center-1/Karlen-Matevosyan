// Linear Search in C++
#include <iostream>
using namespace std;

int search(int arr[], int size, int x) {

  for (int i = 0; i < size; i++)
    if (arr[i] == x)
      return i;
  return -1;
}

int main() {
  int arr[] = {15,2,36,84,52,27};
  int x = 36;
  int size = sizeof(arr) / sizeof(arr[0]);
  int result = search(arr, size, x);

  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result << endl;
}
