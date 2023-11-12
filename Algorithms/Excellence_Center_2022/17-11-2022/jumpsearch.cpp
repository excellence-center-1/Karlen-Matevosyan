#include<iostream>
#include<cmath>

using namespace std;
int jumpSearch(int array[], int size, int num) {
   int low = 0;
   int high = sqrt(size); 

   while(array[high] <= num && high < size) {
      low = high;
      high += sqrt(size);
      if(high > size - 1)
         high = size; 
   }

   for(int i = low; i<high; i++) { 
      if(array[i] == num)
         return i;
   }
   return -1;
}

int main() {
   int n, searchNum, result;
   cout << "Enter number of items: ";
   cin >> n;
   int arr[n];
   cout << "Enter items: " << endl;

   for(int i = 0; i< n; i++) {
      cin >> arr[i];
   }

   cout << "Enter search number to search: ";
   cin >> searchNum;
   if((result = jumpSearch(arr, n, searchNum)) >= 0)
      cout << "Item found at index: " << result << endl;
   else
      cout << "Item is Not Found: " << endl;
}

