// Search in Rotated Array

#include<iostream>
using namespace std;

int SearchArray(int arr[],int n, int target)
{
    int start=0, end =n-1,mid,ans=-1;
    while(start<=end)
    {
       mid=start+(end-start)/2;
       if (arr[mid]==target)
       {
        return mid;
       }

       else if (arr[mid]>=arr[0])
       {
        if(arr[start]<target && arr[mid]>target)
              end=mid-1;

        else
             start=mid+1;
       }

       else{
           if(arr[mid]<=target && arr[end]>=target)
               start=mid+1;

            else
               end=mid-1;
       }
    }
    return -1;
}
int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array ";
    cin >> n;
    cout << "Enter the elements of array ";
    for(int i = 0; i < n; i++)
    cin >> arr[i];


    int target;
    cout<<"Enter the element you want to search ";
    cin>>target;



    int ans = SearchArray(arr, n, target); // function call kiya

    if(ans == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << ans;

    return 0;
}