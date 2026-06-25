// Search Element from the Array



#include<iostream>
using namespace std;
int main(){
    int index=-1;
    int x;
    cout<<"ENTER THE VALUE OF X ";
    cin>>x;
    int arr[5]={3, 4, 6, 9, 7};
    for(int i=0;i<5;i++)
    {
        if(arr[i]==x)
        {
            index=i;
            break;
        }
    }
    cout<<index;
}