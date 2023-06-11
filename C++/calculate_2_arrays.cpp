#include <iostream>
using namespace std;

const int row = 3;
const int col = 3;

int CalcSum(int arr1[row][col],int arr2[row][col],int sum [row][col]){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void CalcDiff(int arr1[row][col],int arr2[row][col],int diff[row][col]){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            diff[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}

void CalcMultiply(int arr1[row][col],int arr2[row][col],int multiply[row][col]){
    for (int i = 0; i< row; i++){
        for (int j = 0; j < col; j++){
            for (int k = 0; k < row; k++){
                multiply[i][j] = arr1[i][k] * arr2[k][j];
            }
        }
    }
}

void PrintArray(int arr[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main () {
    int arr1[row][col] = {{1,2,3},
                          {4,5,6},
                          {7,8,9}};

    int arr2[row][col] = {{9,8,7},
                          {6,5,4}, 
                          {3,2,1}};

    int sum [row][col];
    int diff[row][col];
    int multiply[row][col];
    
    cout<<"Sum Of 2 Arrays: "<<endl;
    CalcSum(arr1,arr2,sum);
    PrintArray(sum);

    cout<<"Difference Of 2 Arrays: "<<endl;
    CalcDiff(arr1,arr2,diff);
    PrintArray(diff);

    cout<<"Multiply of 2 Arrays: "<<endl;
    CalcMultiply(arr1,arr2,multiply);
    PrintArray(multiply);
}
