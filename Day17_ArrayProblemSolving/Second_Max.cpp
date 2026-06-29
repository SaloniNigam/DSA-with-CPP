// find second maximum no.

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[7]={2,3,8,9,6,5,1};
    int ans= INT_MIN;

    //max element
    for(int i=0;i<7;i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }

    // second max
    int second=INT_MIN;
    for(int i=0;i<7;i++)
    {
        if (ans!=arr[i])
        second=max(second,arr[i]);
    }

    cout<<" largest no. is "<<ans <<endl;;
    cout<<"second largest no. is "<<second;
    
}
