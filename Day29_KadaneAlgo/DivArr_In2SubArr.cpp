// divide a array into 2 subarray with equal sum

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // here user can enter the no. of element 
    int n;
    cout<<"Enter no. of element: ";
    cin>>n;
    vector<int>arr(n);  // he i use vector but we can also use array 
    cout<<"Enter the element in array ";
    for(int i=0;i<n;i++) cin>>arr[i];

    long long total = 0;// may be values of toatl is large so use long long 
    for(int x : arr) total += x;

    if(total % 2!= 0) {   // make sure the value of total is divisible by 2 otherwise print can't divided
        cout<<"Can't divide";
        return 0;
    }

    long long target = total / 2;
    long long prefix = 0;

    for(int i=0;i<n-1;i++) { // loop is start from first index ro one less than size of vector
        prefix += arr[i];  // array ki value prefix me add kr do
        if(prefix == target) {
            cout<<"Yes, can divide after index " << i << endl;
            cout<<"Part1: ";
            for(int j=0;j<=i;j++) cout<<arr[j]<<" ";
            cout<<"\nPart2: ";
            for(int j=i+1;j<n;j++) cout<<arr[j]<<" ";
            return 1;
        }
    }
    cout<<"Can't divide into 2 equal sum subarrays";
    return 0;
}