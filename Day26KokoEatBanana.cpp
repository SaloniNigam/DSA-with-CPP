#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n ;
    cout<<"Enter the no. of piles ";
    cin>>n;
    cout<<"Enter the no. of Bananas ";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int h;
    cout<<"Enter the hour for eating banana ";
    cin>>h;

    int start=0, end=0,mid,ans;
    long long sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        end=max(end,arr[i]);
    }

    start=sum/h;
    if(!start)
    start=1;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        int total_time=0;
        for(int i=0;i<n;i++)
        {
            total_time+=arr[i]/mid;
            if(arr[i]%mid)
            total_time++;
        }
        if(total_time>h)
        {
            start=mid+1;;
        }
        else
        {
            ans=mid;
            end=mid-1;
        }
    }
    cout<<"Total no of banana eated by koko pr hour is "<<ans;

}