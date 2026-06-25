// find second minimum no.

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[7]={2,3,8,9,6,5,1};
    int ans= INT_MAX;

    //min element
    for(int i=0;i<7;i++)
    {
        if(arr[i]<ans)
        ans=arr[i];
    }

    // second min
    int second=INT_MAX;
    for(int i=0;i<7;i++)
    {
        if (ans!=arr[i])
        second=min(second,arr[i]);
    }
    
    cout<<"smallest no. is "<<ans<<endl;
    cout<<"second smallest no. is "<<second;
}


