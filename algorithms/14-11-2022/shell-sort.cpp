// Shell Sort in C++ programming

#include <iostream>
using namespace std;

// Shell sort
void shellSort(int array[], int n) {
  // Rearrange elements at each n/2, n/4, n/8, ... intervals
  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
  }
}

// Print an array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// Driver code
int main() {
  int data[] = {9,32,45,-6,24,95,78,55};
  int size = sizeof(data) / sizeof(data[0]);

  cout << "Unsorted Array: ";
  printArray(data,size);

  shellSort(data, size);

  cout << "Sorted Array like Shell Sort: ";
  printArray(data, size);
}
