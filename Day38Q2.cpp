// soorting the sentence 

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{

    string s;
    cout<<"Enter the sentence with its postion at last of the word: ";
    getline(cin,s);

        vector<string> ans(10); 
        string temp;
        int index = 0;

        while(index < s.size())
        {
            if(s[index] == ' ')
            {
                int pos = temp.back() - '0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
            }
            else
            {
                temp += s[index];
            }
            index++;
        }

       
        int pos = temp.back() - '0';
        temp.pop_back();
        ans[pos] = temp;

       
        string result;
        for(int i = 1; i <= 9; i++)
        {
            if(ans[i]!= "")
            {
                result += ans[i];
                result += " ";
            }
        }
        result.pop_back(); 
        cout<<"Sorted Sentence is: "<<result;
    }
