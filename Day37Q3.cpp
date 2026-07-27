// check pangram or not

#include<iostream>
#include<string>
#include<vector>
#include<cctype> 
using namespace std;

int main()
{
    string sentence;
    cout<<"Enter the sentence for checking it pangram or not: ";

    getline(cin, sentence);

    vector<bool> alpha(26, false);

    for(int i = 0; i < sentence.size(); i++)
    {
        char ch = tolower(sentence[i]);
        if(ch >= 'a' && ch <= 'z') 
            alpha[ch - 'a'] = true;
    }

    for(int i = 0; i < 26; i++)
    {
        if(alpha[i] == false) 
        {
            cout << "Sentence is not pangram.";
            return 0; 
        }
    }

    cout << "Sentence is pangram.";
    return 0;
}