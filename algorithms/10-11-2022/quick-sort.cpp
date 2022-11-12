#include <iostream>
using namespace std;

void swap(int *a,int *b){
  int t = *a;
  *a = *b;
  *b = t;
}

void printArray(int array[],int size){
  for (int i = 0;i < size;i++){
    cout << array[i] << " ";
  }     
  cout << endl;
}

int partition(int array[],int low,int high){
  int pivot = array[high];
  int i = (low -1);


  for (int j = low;j < high;j++){
    if (array[j] <= pivot){
      i++;

      //  swap element at i with element at j
      swap(&array[i], &array[j]);

    }
  }  
  // swap pivot with the greater element at i
  swap(&array[i + 1], &array[high]);

  return (i+1); 
}
  void quickSort(int array[],int low,int high){
    if (low < high){
      int pi = partition(array,low,high);

      quickSort(array,low,pi-1);

      quickSort(array,high,pi+1);
    }
  }


  int main(){
    int data[] = {12,25,3,-18,47,-32,12,-1};
    int n = sizeof(data) / sizeof(data[0]);

      cout << "Unsorted Array: \n";
    printArray(data,n);
    quickSort(data,0,n-1);
    cout << "Sorted Array like Quick Sort: \n";
    printArray(data,n);

  }

