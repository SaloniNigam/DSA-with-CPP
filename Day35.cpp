// Find Missing and Reapeating Values

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter the no. of element: ";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter the element in vector: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    // decrease by 1 
    for(int i=0;i<n;i++)
    arr[i]--;

    // check its index and add value to find its occurance
    for(int i=0;i<n;i++)
    {
        int index = arr[i] % n;
        arr[index] += n;
    }
    

    // for missing value
    for(int i=0;i<n;i++)
    {
        if(arr[i]/n==0)
        {
            cout<<"Missing value is: "<<i+1<<endl;
            break;
        }
    }


    // for repeating value
    for(int i=0;i<n;i++)
    {
        if(arr[i]%n==2)
        {
            cout<<"Repeating value is: "<<i+1<<endl;
            break;
        }
    }



}