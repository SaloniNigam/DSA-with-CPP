// selection sorting

#include<iostream>
using namespace std;
int main()
{
   // arr input from user
    int arr[1000];
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    cout<<"Enter the element of array ";
    for(int i=0;i<n;i++)
    cin>>arr[i];

   
    for(int i=0;i<n-1;i++)
    {
        int index=i;
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[index]) // for ascending order
        //if(arr[j]>arr[index])   // for desending order
         index=j;
        
    }
    swap(arr[index],arr[i]);
}

// print the array
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
}