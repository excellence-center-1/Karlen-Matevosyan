#include <iostream>
using namespace std;


int main () {
    int arr [5] = {1,5,6,8,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 0;i < size;i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout<<max<<endl;
}
