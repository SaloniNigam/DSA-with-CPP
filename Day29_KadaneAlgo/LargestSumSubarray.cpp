// largest sum contiguous subarray

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits> // LLONG_MIN ke liye
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. of element in array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the element in array ";
    for(int i=0;i<n;i++) cin>>arr[i];

    long long maxi = LLONG_MIN; // ya maxi = arr[0]
    long long prefix = 0;

    for(int i=0;i<n;i++)
    {
        prefix += arr[i];
        maxi = max(prefix, maxi);
        if(prefix < 0)
            prefix = 0; // negative ho jaye to dobara start
    }
    cout << "Maximum Subarray Sum = " << maxi;
}