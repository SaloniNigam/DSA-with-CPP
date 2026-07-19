// Problem 2. Rotate Matrix 180 degree 

//method 1   rotate 2 time in 90 degree 

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

   //transpose matrix
   for(int i=0;i<row-1;i++)
   {for(int j=i+1;j<col;j++)
   {
         swap(matrix[i][j], matrix[j][i]);
   }
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

cout<<"\nAfter Rotating Matrix 180 Degree in clockwise "<<endl;
   for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
}



 // Rotate Matrix 180 degree 

//method 2   rotate matrix first col wise in reverse order then row wise in reverse 


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

// code part 
  for(int i=0;i<row;i++)
  {
    int start=0,end=row-1;
    while(start<end)
    {
        swap(matrix[i][start],matrix[i][end]);
        start++,end--;
    }
  }
   for(int j=0;j<row;j++)
  {
    int start=0,end=row-1;
    while(start<end)
    {
        swap(matrix[start][j],matrix[end][j]);
        start++,end--;
    }
  }

  
cout<<"\nAfter Rotating Matrix 180 Degree in clockwise "<<endl;
   for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }

}