// Search in sorted row and col wise matrix

#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int row, col;
  cout << "Enter the row and col in matrix: ";
  cin >> row >> col;

  vector<vector<int>> matrix(row, vector<int>(col));

  cout << "Enter the elements in matrix: ";
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      cin >> matrix[i][j];
    }
  }

  // display matrix
  cout << "\nMatrix: \n";
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  
  int target;
  cout << "\nEnter the target element: ";
  cin >> target;

 bool found=false; 
 int i=0,j=col-1;
 int ansRow = -1, ansCol = -1;
 
 while(i<row&&j>=0)
  {
    if(matrix[i][j]==target)
        {
            found=true;
            ansRow = i;
            ansCol = j;
            break;
  
        }
    
    else if(matrix[i][j]<target)
        i++;
    else 
        j--;
    }

    if(found)
    {
     cout << "Target value found at index: (" << ansRow << ", " << ansCol << ")" << endl;
    }
    else
        cout<<"Target value not found "<<endl;
     
     
   return 0;
}