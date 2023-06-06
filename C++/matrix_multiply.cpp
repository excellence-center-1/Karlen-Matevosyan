#include <iostream>
using namespace std;

int main () {
    int n = 3;
    int arr_1 [n][n] = {{1,2,3}, {4,5,6},{7,8,9}};
    int arr_2 [n][n] = {{9,8,7}, {6,5,4},{3,2,1}};
    int result [n][n];

    for (int i = 0;i<n;i++){
        for (int j = 0;j<n;j++){
            result [i][j] = 0;
            
            for (int k = 0;k<n;k++){
                result [i][j] += arr_1[i][k] * arr_2 [k][j];
}
}
}

    for (int i = 0;i<n;i++){
        for (int j = 0;j<n;j++){
            cout<<result [i][j]<<" ";
}
    cout<<endl;
}
}
