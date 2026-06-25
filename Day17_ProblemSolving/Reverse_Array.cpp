// Reverse of the Array element 

#include<iostream>
using namespace std;
int main()
{
    int i=0 , j=4;
    int arr[5]={6,8,2,9,5};
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
}

