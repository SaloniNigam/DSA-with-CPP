#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string to find substring: ";
    cin>>s;

    vector<bool>count(256,0);
        int first=0,second=0,len=0;
        while(second<s.size())
        {
        while(count[(unsigned char)s[second]])
            {
                count[(unsigned char)s[first]]=0;
                first++;
            }
            count[(unsigned char)s[second]]=1;
            len=max(len,second-first+1);
            second++;
        }
        cout<<"Length of Longest Substring Without Repeating Characters is: "<<len;
}