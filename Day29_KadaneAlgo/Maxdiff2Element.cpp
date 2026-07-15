// Maximum difference b/w two elements

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[],int n){
    if (n<2)
    return 0;

    int min_ele=arr[0];
    int max_diff=arr[1]-arr[0];

    for (int i=1;i<n;i++)
    {
        max_diff=max(max_diff,arr[i]-min_ele);
        min_ele=min(min_ele,arr[i]);
    }
    return max_diff;
}

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the no. of element ";
    cin>>n;
    cout<<"Enter the element in the array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];



    cout<<"Maximum difference: "<<maxDiff(arr, n);
    return 0;
}