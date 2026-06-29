#include<iostream>
using namespace std;

void func(int a[],int n)
{
    for(int i=0;i<5;i++)
    // cout<<sizeof(a)<<endl;
    cout<<a[i]<<" ";
}


int main()
{
    int arr[5]={3,4,7,6,8};
    cout<<sizeof(arr)<<endl;
    func(arr,5);
}