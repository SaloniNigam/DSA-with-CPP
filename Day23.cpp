#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the element of array ";
    for (int i=0;i<n;i++)
    cin>>arr[i];
    int target;
    cout<<"enter the target value ";
    cin>>target;

    
    int start=0,end=n-1,mid,first=-1,last=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        {first=mid;
        end=mid-1;
        }
        else if (arr[mid]<target)
           start=mid+1;

        else
             end=mid-1;
    }

     start=0,end=n-1,mid,first=-1,last=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
        last=mid;
        start=mid+1;
        }
        else if (arr[mid]<target)
           start=mid+1;

        else
             end=mid-1;
    }

    vector<int> a(2);
    a[0]=first;
    a[1]=last;
    return 0;
}