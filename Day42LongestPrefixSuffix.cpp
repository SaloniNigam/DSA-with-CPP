// Longest Prefix and Suffix

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;

     vector<int>lps(s.size(),0);
        int pre=0,suf=1;
        
        while(suf<s.size())
        {
            //if prefix is equal to suffix
            if(s[pre]==s[suf])
            {
                lps[suf]=pre+1;
                suf++,pre++;
            }
            else
            {
                //if prefix is at 0 lps value
                if(pre==0)
                {
                    lps[suf]=0;
                    suf++;
                }
                
                // if prefix is at other than 0 check its previous lps value
                else{
                    pre=lps[pre-1];
                }
            }
        }
       
        cout<<"length of longest prefix suffix is: "<<lps[s.size()-1]<<" ";
        return 0;
}