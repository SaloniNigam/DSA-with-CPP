#include<iostream>
#include<string>
#include<vector>
using namespace std;

void lpsfind (vector<int> &lps,string &s) {
    int pre=0,suf=1;

    while(suf < s.size())
    {
        if(s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            suf++;
            pre++;
        }
        else
        {
            if(pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else{
                pre = lps[pre-1];
            }
        }
    }
}

int main()
{
    string haystack;
    cout << "Enter the haystack: ";
    cin >> haystack;

    string needle;
    cout << "Enter the needle: ";
    cin >> needle;

    if(needle.empty()){
        cout << "Matching string found at index: 0";
        return 0;
    }

    vector<int> lps(needle.size(), 0);
    lpsfind(lps, needle);

    int first = 0, second = 0;

    while(first < haystack.size() && second < needle.size())
    {
        if(haystack[first] == needle[second])
        {
            first++;
            second++;
        }
        else{
            if(second == 0)
                first++;
            else{
                second = lps[second-1];
            }
        }
    }

    if(second == needle.size())
        cout << "Matching string found at index: " << first - second;
    else 
        cout << "String is not found in haystack";

    return 0; 
}