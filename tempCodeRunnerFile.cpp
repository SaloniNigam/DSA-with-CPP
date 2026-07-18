include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     int row, col;
//     cout << "Enter the row and col ";
//     cin >> row >> col;

//     if(row!= col){
//         cout << "In-place transpose sirf square matrix ke liye hai!" << endl;
//         return 0;
//     }

//     vector<vector<int>> matrix(row, vector<int>(col));

//     vector<int>ans;
//     // input
//     cout << "Enter the value in the matrix ";
//     for(int i = 0; i < row; i++)
//         for(int j = 0; j < col; j++)
//             cin >> matrix[i][j];

//     // transpose in-place
//       for(int i=0; i<row; i++){
//             for(int j=0; j<col; j++){
//                 ans[j][i] = matrix[i][j];
//             }
//     }

//     // display transposed matrix
//     cout << "\nTranspose Matrix:" << endl;
//     for(int i = 0; i < row; i++) {
//         for(int j = 0; j < col; j++) {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }