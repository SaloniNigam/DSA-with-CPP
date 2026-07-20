#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix) 
{
    int row = matrix.size();
    int col = matrix[0].size();

    // Transpose matrix
    for(int i = 0; i < row; i++)
    {
        for(int j = i + 1; j < col; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row - 90 degree clockwise rotate
    for(int i = 0; i < row; i++)
    {
        int start = 0, end = col - 1; // end = col-1 hoga
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
}

int main()
{
    int row, col;
    cout << "Enter the row and col in matrix: ";
    cin >> row >> col;

    vector<vector<int>> matrix(row, vector<int>(col)); 

    cout << "Enter the element in matrix: ";
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }

    int k;
    cout << "Enter the no. of times you want to rotate matrix: ";
    cin >> k;

    k = k % 4; // 4 baar rotate = same matrix
    while(k > 0) // 3. yaha r-- galat tha, k-- hona chahiye
    {
        rotate(matrix);
        k--; // 4. r ki jagah k
    }

    // display matrix
    cout << "\nRotated Matrix: \n";
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}