#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

        //lps code
        void lpsfind (vector<int> &lps,string &s) {
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
    }


    // string match code
    int KMP_match(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        lpsfind(lps,needle);
        int first=0,second=0;

        while(first<haystack.size()&&second<needle.size())
        {
            //if matched
            if(haystack[first]==needle[second])
            first++,second++;
            //if not matched
            else{
                //at zero value
                if(second==0)
                first++;
                else{
                    second=lps[second-1];
                }
            }
        }

        if(second==needle.size())
        return 1;

        return 0;
    }

    
    
int main()

{
        string a,b;
        cout<<"Enter string a: ";
        cin>>a;
        cout<<"Enter string b: ";
        cin>>b;

        if(a==b)
        return 1;

        int repeat=1;
        string temp=a;

        while(temp.size()<b.size())
        {
            temp+=a;
            repeat++;
        }

        if(KMP_match(temp,b)==1)
        {
        cout<< repeat;
        return 0;
        }

        if(KMP_match(temp+a,b)==1)
        {
         cout<< repeat+1;
        return 0;
        }

        cout<< -1;
        return 0;
}