// Binary Search in 2D Array 

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

  int start = 0, end = row * col - 1;
  bool found = false;
  int foundRow = -1, foundCol = -1;

  while(start <= end) {
    int mid = start + (end - start) / 2;
    int row_index = mid / col;
    int col_index = mid % col;

    if(matrix[row_index][col_index] == target) {
        found = true;
        foundRow = row_index;
        foundCol = col_index;
        break;
    }
    else if(matrix[row_index][col_index] < target)
        start = mid + 1;
    else
        end = mid - 1;
  }

  if(found)
    cout << "Target value found at position: [" << foundRow << "][" << foundCol << "]" << endl;
  else
    cout << "Target value not found: " << target << endl;

  return 0;
}