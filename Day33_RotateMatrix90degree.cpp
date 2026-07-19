// Problem No.1  Rotate Matrix by 90 degree clockwsie

#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main()

{
  int row,col;
  cout<<"Enter the row and col in matrix: ";
  cin>>row>>col;
  int matrix[row][col];
 

  
  cout<<"Enter the element in matrix: ";
  for(int i=0;i<row;i++)
  for(int j=0;j<col;j++)
  {
    cin>>matrix[i][j];
  }
  // display matrix

  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }

  
   
// transpose matrix
   for(int i=0;i<row-1;i++)
   {for(int j=i+1;j<col;j++)
   {
         swap(matrix[i][j], matrix[j][i]);
   }
}


cout<<"\n After Transpose "<<endl;
   for(int i=0;i<col;i++)
  {
    for(int j=0;j<row;j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }

  
// Reverse the matrix

for(int i=0;i<row;i++)
{
    int start=0,end=row-1;
    while (start<end)
    {
        /* code */
        swap(matrix[i][start],matrix[i][end]);
        start++,end--;
    }
    
}

cout<<"\n After Reverse "<<endl;
   for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
}

