//   Min Chars to Add for Palindrome
   
   #include<iostream>
    #include<vector>
    #include<algorithm>
    #include<string>
    using namespace std;
    int main(){
        
        string str;
        cout<<"Enter the string: ";
        cin>>str;

        string rev=str;
        reverse(rev.begin(),rev.end());// reverse string
        int size=str.size();
        
        str+='$';//add any symbol
        str+=rev;//then add reverse also
        

        // now find lps
        int n=str.size();
        vector<int>lps(n,0);
        
        int pre=0,suf=1;
        while(suf<str.size())
        {
            if(str[pre]==str[suf])
            {
            lps[suf]=pre+1;
            suf++,pre++;
            }
            else
            {
                if(pre==0)
                {
                    
                    suf++;
                }
                
                else
                {
                    pre=lps[pre-1];
                    
                }
            }
        }
        
        //lenght of string as o/p
        cout<<"Length of string added to make the given string a palindrome is: "<<size-lps[n-1];
    }


// modify code with string which we add to make this palindrome

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    string original = str; 
    string rev = str;
    reverse(rev.begin(), rev.end());
    int size = str.size();
    
    string temp = str + '$' + rev; 
    int n = temp.size();
    vector<int> lps(n, 0);
    
    int pre = 0, suf = 1;
    while(suf < n)
    {
        if(temp[pre] == temp[suf])
        {
            lps[suf] = pre + 1;
            suf++; 
            pre++;
        }
        else
        {
            if(pre == 0)
            {
                suf++;
            }
            else
            {
                pre = lps[pre-1];
            }
        }
    }
    
    int toAdd = size - lps[n-1]; // kitne char add karne hain
    string addStr = rev.substr(0, toAdd); // ye wahi string hai jo aage jodegi
    
    string palindrome = addStr + original; // final palindrome

    cout << "Length of string to add: " << toAdd << endl;
    cout << "String to add in front: " << addStr << endl;
    cout << "Final Palindrome: " << palindrome << endl;
    
    return 0;
}