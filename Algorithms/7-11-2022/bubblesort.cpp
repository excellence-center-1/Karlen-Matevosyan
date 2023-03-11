#include<iostream>
using namespace std;
int main(){
    int arr[9]={12, 5, 20, 2, 1,-21,15,45,-5};
      for (int j = 0;j<8; j++){
        for(int i = 0; i<8; i++){
  	int temp;
	  if(arr[i]>arr[i+1]){
	temp = arr[i];
	arr[i]=arr[i+1];
	arr[i+1]=temp;
	}
}
  cout << endl;
      for(int i=0;i<8;i++)
          cout <<arr[i] <<" ";
}
          cout << endl; 
      for(int j=0;j<8;j++)
        	cout << arr[j] <<" ";
          cout << endl;
}
