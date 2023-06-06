#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter The Size Of Your Array: "<<endl;
    cin>>n;
    int arr[n][n];

    cout<<"Enter The Elements Of The Array: "<<endl;

    for (int i = 0;i<n;i++){
        for (int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0;i<n;i++){
        for (int j = 0;j<n;j++){
            if(j<i){
                sum+=arr[i][j];
            }
        }
    }
    cout<<"Sum Of The Elements Below Diagonal is: "<<sum<<endl;
}
