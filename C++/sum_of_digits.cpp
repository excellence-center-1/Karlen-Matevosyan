#include <iostream>
using namespace std;

int sum = 0;
void printArray(int arr[5]){
    for (int i = 0; i<5;i++){
        sum += arr[i];
    }
}
int main () {
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr);
    cout<<sum;
}
