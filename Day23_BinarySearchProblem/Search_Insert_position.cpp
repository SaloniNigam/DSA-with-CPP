// 2. Search Insert position

#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    cout<<"enter the element in array ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    

    int target;
    cout<<"enter the target value ";
    cin>> target;

    int start=0,end=n-1,mid,index=n;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            index= mid;
            break;
        }
        else if (arr[mid]<target)
            start=mid+1;

        else
            {index=mid;
            end=mid-1;
            }
    }
    cout<<"Index of target value is "<<index<<endl;
    return 0;
}

