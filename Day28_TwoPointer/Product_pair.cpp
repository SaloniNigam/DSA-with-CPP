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

    long long target;
    cout<<"Enter the target product: ";
    cin>>target;

    //sort the elments
    
    sort(arr.begin(),arr.end());
    int start=0, end=arr.size()-1;
    target = llabs(target);  // for long we use llabs (long long abs)

    while(start<end)
    {
        long long prod=1LL*arr[start]*arr[end];
        if(prod==target)
        {cout<<"pair found at index "<<arr[start]<<", "<<arr[end];
        return 1;
        }
        else if(prod<target)
        start++;
        else{
            end--;
        }

    }
    cout<<"No pair found with product of "<<target;
    return 0;
}