#include<iostream>
#include<string>
#include<vector>
#include<cctype> 

using namespace std;
int main()
{
    string s;
    cout<<"Enter the string to sort: ";
    getline(cin, s);

    vector<int> alpha(26,0);
    for(int i=0;i<s.size();i++)
    {
        char ch = tolower(s[i]); 
        if(ch >= 'a' && ch <= 'z')
        alpha[ch-'a']++;
    }
    string ans;
    for(int i=0;i<26;i++)
    {
        char c='a'+i;
        while (alpha[i])
        {
            /* code */
            ans+=c;
            alpha[i]--;
        }
        
    }
    cout<<ans<<endl;
    return 0;
}