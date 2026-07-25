// Defanging an IP address

#include<iostream>
using namespace std;
int main()
{
    string address;
    cout<<"Enter the string using '.' between like '1.1.1.1' ";
    cin>>address;
    cout<<address<<endl;
    int index=0;
    string ans;
    int n=address.size();
    while(index<n)
    {
        if(address[index]=='.')
        ans+="[.]";
        else
        ans+=address[index];
    
        index++;
    }

    cout<<ans<<endl;
    
}