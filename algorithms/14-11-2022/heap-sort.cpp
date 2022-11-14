#include <iostream>
using namespace std;

void heap(int arr[],int n,int i){
  // Initialize largest as root
  int largest = i;

  int left = i * 2 + 1;
  int right = i * 2 + 2;

  if (left < n && arr[left] > arr[largest]){
    largest = left;
  }

  if (right < n && arr[right] > arr[largest]){
    largest = right;
  }

  if (largest != i){
    swap(arr[i],arr[largest]);


      heap(arr,n,largest);
  }
}

void heapSort(int arr[],int n){
  for (int i = n/2 - 1; i >= 0; i--)
    heap(arr,n,i);

  for(int i = n - 1;i > 0;i--){
    swap(arr[0],arr[i]);
  heap(arr,i,0);
}
}

void printArray(int arr[],int n){
  for(int i = 0;i < n;i++)
    cout << arr[i] << " ";
  cout << "\n";
}

int main(){
  int arr[] = {12,0,-8,41,29,35,7,66};
  int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted Array: ";
  printArray(arr,n);

    cout << "Array Sorted like Heap Sort: ";
  heapSort(arr,n);
  printArray(arr,n);
}
