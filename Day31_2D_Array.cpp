// 1. Memory Allocation of 2 D array- row amd col wise 

#include<iostream>
using namespace std;


void printcol(int arr[][4],int row,int col)
{
    for(int col=0;col<4;col++)
    for(int row=0;row<3;row++)
    cout<<arr[row][col]<<" ";
}
int main()
{
    // create 2d array

    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    // print all the value in array row wise
    cout<<"Row wise print ";
    for(int row=0;row<3;row++)
    for(int col=0;col<4;col++)
    cout<<arr[row][col]<<" ";
    cout<<endl;


    //  print all the value in array col wise
    cout<<"Column wise print ";
    printcol(arr,3,4);
}




// 2. Find an element in the array

#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int x=18;
    for(int i=0;i<3;i++)
   {
     for(int j=0;j<4;j++)
    {
        if(arr[i][j]==x)
        {
        cout<<"found ";
        return 0;
        } 
    }
    }
    cout<<"Not found ";
}


//3.  Sum of two matrix 

#include<iostream>
using namespace std;
int main()
{

// create 3 matrix 1 for their sum
 int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
 int arr2[3][4]={21,42,33,94,53,64,67,48,29,14,29,18};   
 int ans[3][4];

for(int i=0;i<3;i++)
for(int j=0;j<4;j++)
{
    ans[i][j]=arr1[i][j]+arr2[i][j];
}
cout<<"Sum of two matrix is: ";
for(int i=0;i<3;i++)
for(int j=0;j<4;j++)
{
    cout<<ans[i][j]<<" ";
}

}


// 4. Subtraction of two matrix 

#include<iostream>
using namespace std;
int main()
{

// create 3 matrix 1 for their sum

 int arr1[3][4]={21,42,33,184,53,64,67,48,29,14,29,18};   
  int arr2[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
 int ans[3][4];

for(int i=0;i<3;i++)
for(int j=0;j<4;j++)
{
    ans[i][j]=arr1[i][j]-arr2[i][j];
}
cout<<"Subtraction of two matrix is: ";
for(int i=0;i<3;i++)
for(int j=0;j<4;j++)
{
    cout<<ans[i][j]<<" ";
}

}



// 5. print row index with maximum sum 
#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

void printrowmax(int arr[][4], int row, int col)
{
    int maxSum = INT_MIN;
    int index = -1;

    for(int i = 0; i < row; i++)
    {
        int total = 0;
        for(int j = 0; j < col; j++)
        {
            total += arr[i][j];
        }

        
        if(total > maxSum)
        {
            maxSum = total;
            index = i;
        }
    }
    cout << "Max sum row index: " << index << endl;
    cout << "Max sum: " << maxSum << endl;
}

int main()
{
    int arr1[3][4] = {21,42,33,14, 53,64,67,48, 29,14,29,18};

    printrowmax(arr1, 3, 4);
}



// 6.  print diagonal sum
#include<iostream>
using namespace std;
void printsumdig(int matrix[][3],int row,int col )
{
    int first=0;
    int second=0;

    // sum of first diagonal

    int i=0;
    while(i<row)
    {
        first+=matrix[i][i];
        i++;
    }
    //sum of second diagonal
    i=0;
    int j=col-1;
    while(j>=0)
    {
        second+=matrix[i][j];
        i++;
        j--;
    }
cout<<"First diagonal sum is: "<<first<<endl<<"Second diagonal sum is: "<<second<<" ";
}

int main()
{
int matrix[3][3]={3,5,2,5,6,2,2,5,6};

printsumdig(matrix,3,3);
}



// 7. Reverse each row of matrix

#include<iostream>
using namespace std;

void printrevmat(int reverse[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        int start=0,end=col-1;
        while(start<end)
        {
            swap(reverse[i][start],reverse[i][end]);
            start++,end--;
        }
    }

 for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << reverse[i][j] << " ";
        }
        cout << endl; // har row new line me
    }
}
int main()
{
    int reverse[3][4]={2,4,5,6,3,5,6,4,9,6,7,8};

    printrevmat(reverse,3,4);
}