
#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;

int main()
{
     
    vector<int>arr;
    int n;
    cout<<"Enter the no. of element: ";
    cin>>n;

    arr.resize(n);


    cout<<"Enter the element in vector: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];


    int target;
    cout<<"Enter the sum of 3 no. as a target value: ";
    cin>>target;

       if(n<3)
       return 0;    
    
        sort(arr.begin(), arr.end()); 
        for(int i=0;i<n-2;i++)
        {
           int ans=target-arr[i];


           int start=i+1, end=n-1;
           

        while(start<end)
        {
            if(arr[start]+arr[end]==ans)
             {
                cout << "Triplet found: " << arr[i] << " "<< arr[start] << " "<< arr[end] << endl;
             return 0;
             }

            else if(arr[start]+arr[end]>ans)
            end--;
            
            else
            start++;
        }
        
    }
        cout << "No triplet found";
        return 0;
}