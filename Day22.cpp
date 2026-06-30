// Binary Sort
// For ascending order of arrary


#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
    {
        int start=0;
        int end= n-1, mid;
   while (start<=end)
   {
    // mid = (start + end)  / 2;  // overflow
    mid = start+(end-start)  / 2;
    if(arr[mid]==key)
    {
        return mid;

    }
    else if(arr[mid]<key)
     start=mid+1;

    else
       end=mid-1;

   }
   return -1;
    }


int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key: ";
    cin>>key;


    cout<<BinarySearch(arr,n,key);
       return 0;
}


// for descending order of array
#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
    {
        int start=0;
        int end= n-1, mid;
   while (start<=end)
   {
    // mid = (start + end)  / 2;  // overflow
    mid = start+(end-start)  / 2;
    if(arr[mid]==key)
    {
        return mid;

    }
    else if(arr[mid]<key)
         end=mid-1;
    else
       
       start=mid+1;


   }
   return -1;
    }


int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key: ";
    cin>>key;


    cout<<BinarySearch(arr,n,key);
       return 0;
}