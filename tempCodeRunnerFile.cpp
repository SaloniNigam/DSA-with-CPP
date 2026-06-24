#include<iostream>
#include <climits> // For INT_MAX
using namespace std;
int main()
{ 
    int arr[5]={ 1, 4, 3, 8, 9 };
    int ans=INT8_MIN;
    for (int i=0; i<5;i++)
    {
        if ( arr [i]<ans);
        ans=arr[i];
    }
    cout<<ans;
    return 0;
}