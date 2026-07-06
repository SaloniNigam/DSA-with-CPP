// kth missing positive integer

#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array ";
    cin >> n;
    cout << "Enter the elements of array ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cout<<"Enter the kth missing no. ";
    cin>>k;


    int total_missing = arr[n-1] - n; 
    if(total_missing < k){
        cout << -1; 
        return 0;
    }

    int start=0, end=n-1,ans=n,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]-mid-1>=k)
        {
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    }
    cout<< ans+k;
}