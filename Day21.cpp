// Insertion sort for incersing order

#include<iostream>
using namespace std;
int main()
{

    // input array
    int arr[1000];
    int n;
    cout<<" enter the size of array ";
    cin>>n;
    cout<<" Enter the element of array ";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    //  algo for insertion sort
    for(int i=1;i<n;i++)
      { for(int j=i;j>0;j--)
       {
        if(arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
        }
        else
           break;
       }
    }

    // print array

    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }

}


// Insertion sort for decersing order

#include<iostream>
using namespace std;
int main()
{

    // input array
    int arr[1000];
    int n;
    cout<<" enter the size of array ";
    cin>>n;
    cout<<" Enter the element of array ";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    //  algo for insertion sort
    for(int i=1;i<n;i++)
      { for(int j=i;j>0;j--)
       {
        if(arr[j]>arr[j-1])
        {
            swap(arr[j],arr[j-1]);
        }
        else
           break;
       }
    }

    // print array

    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }

}


// Insertion sort for increasing order from reverse(backward side)

#include<iostream>
using namespace std;
int main()
{

    // input array 
    int arr[1000];
    int n;
    cout<<" enter the size of array ";
    cin>>n;
    cout<<" Enter the element of array ";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    //  algo for insertion sort
    for(int i=n-2;i>=0;i--)
      {  int key = arr[i];
        int j = i;

        // key ko right mein sahi jagah ghusao
        while(j < n-1 && arr[j+1] < key)
        {
            arr[j] = arr[j+1]; // left shift
            j++;
        }
        arr[j] = key;
    }

    // print array

    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }

}