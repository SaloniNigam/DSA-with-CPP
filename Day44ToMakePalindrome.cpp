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