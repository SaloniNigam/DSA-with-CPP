#include<iostream>
using namespace std;
int main()
{   

    int height[1000];
    int n;
    cout<<"Enter the no. of building ";
    cin>>n;
    cout<<"Enter the height of buldings ";
    for(int i=0;i<n;i++)
    cin>>height[i];

    int leftmax=0,rightmax=0,water=0;
    int maxheight=height[0],index=0;
    


   // max height 
    for(int i=1;i<n;i++)
    {
        if(height[i]>maxheight)
        {
            maxheight=height[i];
            index=i;
        }
    }


     leftmax = height[0]; 
    // left part 


for(int i=0;i<index;i++)
{
     if(leftmax>height[i])   // if leftmax is smaller than it gives -ve value 
     {
        water+=leftmax-height[i];

     }
    else
    {
        leftmax=height[i];
    }
}

    rightmax = height[n-1];
    // right part 
for(int i=n-1;i>index;i--)
{
     if(rightmax>height[i])
     {
        water+=rightmax-height[i];

     }
    else
    {
        rightmax=height[i];
    }
}  

    cout << "Total water trapped: " << water; 
    return 0;
}