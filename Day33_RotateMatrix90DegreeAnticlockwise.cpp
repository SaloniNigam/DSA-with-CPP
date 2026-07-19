// Problem 3. Rotate Matrix 90 Degree Anticloockwise

// Method 1. By rotating the matrix 3 times in clockwise like 270 degree

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
   
  // step 1
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

//step 2
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

    // step 3
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

cout<<"\nAfter Rotating Matrix 90 Degree in Anticlockwise "<<endl;
   for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
}


// Method 2  transpose then reverse in column wise 

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

  // transpose matrix
   for(int i=0;i<row-1;i++)
   {
        for(int j=i+1;j<col;j++)
        {
             swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Col wise reverse 

    for(int j=0;j<row;j++)
    {
        int start=0,end=row-1;
        while(start<end)
        {
            swap(matrix[start][j],matrix[end][j]);
            start++;
            end--;
        }
    }
    
    cout<<"\nAfter Rotating Matrix 90 Degree in Anticlockwise "<<endl;
   for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}