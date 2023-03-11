#include <iostream>  
using namespace std;  
int main()  
{  
  int a[3][3],b[3][3],mul[3][3],row,column,i,j,k;    
  cout<<"enter the number of row: ";    
  cin>>row;    
  cout<<"enter the number of column: ";    
  cin>>column;    
  cout<<"enter the first matrix element: \n";    
  for(i=0;i<row;i++)    
  {    
    for(j=0;j<column;j++)    
    {    
      cin>>a[i][j];  
    }    
  }    
  cout<<"enter the second matrix element: \n";    
  for(i=0;i<row;i++)    
  {    
    for(j=0;j<column;j++)    
    {    
      cin>>b[i][j];    
    }    
  }    
  cout<<"multiply of the matrix: \n";    
  for(i=0;i<row;i++)    
  {    
    for(j=0;j<column;j++)    
    {    
      mul[i][j]=0;    
      for(k=0;k<column;k++)    
      {    
        mul[i][j]+=a[i][k]*b[k][j];    
      }    
    }    
  }    

  for(i=0;i<row;i++)    
  {    
    for(j=0;j<column;j++)    
    {    
      cout<<mul[i][j]<<" ";    
    }    
    cout<<"\n";    
  }    
  return 0;  
}    
