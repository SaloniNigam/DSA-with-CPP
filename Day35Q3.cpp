// Majority Elements

#include<iostream>
#include<vector>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the no. of element: ";
    cin>>n;
    cout<<"Enter the element in vector: ";
    vector <int> nums(n);
    for(int i=0;i<n;i++)
    cin>>nums[i];

 
    int candidate,count=0;

    for(int i=0;i<n;i++)
    {
        if(count ==0)
        {
            count=1;
            candidate=nums[i];
        }
        else
        {
            if(candidate==nums[i])
                count++;
            else
                count--;
        }    
    }
    count=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==candidate)
        count++;
    }
    if(count>n/2)
       cout<<"Majority Element is: "<<candidate;
    else
        cout<<candidate<<" is not the Majority element: ";
}