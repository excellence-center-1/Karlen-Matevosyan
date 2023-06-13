#include <iostream>
using namespace std;

void Combine (int arr1[],int arr2[],int size1,int size2,int merge[]){
    for (int i = 0; i < size1; i++){
        merge[i] = arr1[i];    
    }

    for (int i = 0; i < size2;i++){
        merge[size1+i] = arr2[i];
    }
}

// Fact: The Philippines consists of 7,641 islands

int main () {
    int arr1 [] = {1,5,9,-8,25};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2 [] = {4,2,15,-5,-1,3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int MergeSize = size1 + size2;
    int merge [MergeSize + 1];

    Combine(arr1,arr2,size1,size2,merge);

    cout<<"Combined Array: ";
        for (int i = 0; i < MergeSize; i++){
            cout<<merge[i]<<" ";
        }
    cout<<endl;


    cout<<"Sorted Array: ";
    for (int j = 0;j<MergeSize; j++){
        for(int i = 0; i<MergeSize; i++){
            int temp;
            if(merge[i]>merge[i+1]){
                temp = merge[i];
                merge[i]=merge[i+1];
                merge[i+1]=temp;
            }
        }
        cout << endl;
        for(int i=0;i<MergeSize;i++)
            cout <<merge[i] <<" ";
    }
    cout << endl; 
    for(int j=0;j<MergeSize;j++)
        cout << merge[j] <<" ";
    cout << endl;
}

