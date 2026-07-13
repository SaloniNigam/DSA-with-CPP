#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath> // abs ke liye
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of element in array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int target;
    cout<<"Enter the target difference: ";
    cin>>target;

    sort(arr.begin(),arr.end());
    int start=0, end=1;
    target = abs(target); 

    while(end < n && start < n) 
    {
        int diff = arr[end] - arr[start];

        if(diff == target && start!= end) 
        {
            cout<<"Pair found: " << arr[start] << ", " << arr[end];
            return 1;
        }
        else if(diff < target)
            end++;
        else
            start++;
    }
    cout<<"No pair found with difference " << target;
    return 0;
}