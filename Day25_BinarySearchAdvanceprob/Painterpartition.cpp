// Painter partition 

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
    cout<<"Enter the no. of painter to paint the wall ";
    cin>>k;


      
        if (n<k)
        {
            cout<<-1;
            return 0;
        }
        
        
        long start=0,end=0,ans=-1,mid;
        for(int i=0;i<n;i++)
        {
            if(arr[i] > start)
              start = arr[i];
            end+=arr[i];
        }
        
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            
            long wall=0;
            int count=1;
            for(int i=0;i<n;i++)
            {
                if(wall + arr[i] <= mid)
                {
                    wall += arr[i];
                }
                else
                {
                    count++;
                    wall = arr[i];
                    
                    if(wall > mid)
                    {
                        count = k+1; 
                        break;
                    }
                }
            }
            
            if(count<=k)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            
        }
        cout<<ans;
        return 0; 
}