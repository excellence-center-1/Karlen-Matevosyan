#include <iostream>
using namespace std;

int num;
int sum = 0;
void Sum_Num(int n){
    if (n <= num){
        sum += n;
        Sum_Num(n + 1);
    }
}

int main (){
    cout<<"Enter The Number: ";
    cin>>num;
    Sum_Num(1);
    cout<<"The Sum From 1 to "<<num<<" Is: "<<sum<<endl;
    return 0;
}
