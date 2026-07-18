#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // Creating 2D vector


    int row,col;
    cout<<"Enter the row and col ";
    cin>>row>>col;
    vector< vector <int> >matrix(row,vector<int>(col,1));
    for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    {
        cout<<matrix[i][j]<<" ";
    }



    // find out no. of rows and col.

    cout<<"Rows = "<<matrix.size()<<endl;
     cout<<"Columns = "<<matrix[0].size();


    // take input from user
    cout<<"Enter the value in the marix ";
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    {
        cin>>matrix[i][j];
    }

    // Display matrix
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<" ";
            
        }
         cout<<endl;
    }
   
}




// problem 1. Wave Form

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int row,col,i,j;
    cout<<"Enter the row and col ";
    cin>>row>>col;
    vector< vector <int> >matrix(row,vector<int>(col,1));

    // take input from user
    cout<<"Enter the value in the marix ";
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    {
        cin>>matrix[i][j];
    }

    // Display matrix
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<" ";
            
        }
         cout<<endl;
    }


    // Wave form 
    for(j=0;j<col;j++)
    {
        if(j%2==0)
        {
            for(i=0;i<row;i++)
            {
                cout<<matrix[i][j]<<" ";
            }
        }
        else
        {
            for(i=row-1;i>=0;i--)
            {
                cout<<matrix[i][j]<<" ";
            }
        }
    }
    return 0;

    
   
}


// Problem 2. spiral form


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the row and col ";
    cin >> row >> col;

    // pehle row col input lo, phir vector banao
    vector<vector<int>> matrix(row, vector<int>(col));

    // input
    cout << "Enter the value in the matrix ";
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            cin >> matrix[i][j];

    // display matrix
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // boundaries - input ke BAAD initialize karo
    int Top = 0, Right = col - 1, Bottom = row - 1, Left = 0;

    cout << "\nSpiral Order: ";
    // Spiral Form
    while(Top <= Bottom && Left <= Right)
    {
        // 1. print top row: left -> right
        for(int j = Left; j <= Right; j++) {
            cout << matrix[Top][j] << " ";
        }
        Top++;

        // 2. print right col: top -> bottom
        for(int i = Top; i <= Bottom; i++) { // <= lagana hai
            cout << matrix[i][Right] << " ";
        }
        Right--;

        // 3. print bottom row: right -> left
        if(Top <= Bottom) {
            for(int j = Right; j >= Left; j--) {
                cout << matrix[Bottom][j] << " ";
            }
            Bottom--;
        }

        // 4. print left col: bottom -> top
        if(Left <= Right) {
            for(int i = Bottom; i >= Top; i--) { // <= lagana hai
                cout << matrix[i][Left] << " ";
            }
            Left++;
        }
    }
}




// Problem 3.  Transpose matrix

// method 1. For same size of matrix

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the row and col ";
    cin >> row >> col;

    if(row!= col){
        cout << "In-place transpose sirf square matrix ke liye hai!" << endl;
        return 0;
    }

    vector<vector<int>> matrix(row, vector<int>(col));

    // input
    cout << "Enter the value in the matrix ";
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            cin >> matrix[i][j];

    // transpose in-place
    for(int i=0; i<row; i++){
        for(int j=i+1; j<col; j++){ // j<col hona chahiye, j<row nahi
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // display transposed matrix
    cout << "\nTranspose Matrix:" << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



// method 2.  For diff size of matrix


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the row and col ";
    cin >> row >> col;

    vector<vector<int>> matrix(row, vector<int>(col));

    // input
    cout << "Enter the value in the matrix ";
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            cin >> matrix[i][j];

    // naya transpose matrix banaya. Size ulta: col x row
    vector<vector<int>> ans(col, vector<int>(row));

    // transpose
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            ans[j][i] = matrix[i][j]; // row -> col, col -> row
        }
    }

    // display transposed matrix
    cout << "\nTranspose Matrix:" << endl;
    for(int i = 0; i < col; i++) { // ab row ki jagah col
        for(int j = 0; j < row; j++) { // ab col ki jagah row
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}