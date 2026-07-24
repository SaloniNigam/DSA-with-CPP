  //Basic opertion of String and some problems

#include<iostream>
using namespace std;
int main()
{

    // char used 
    char arr[]={'a','p','p','l','e'};
   // cout<<arr;

   for(int i=0;i<5;i++)
   cout<<arr[i];

   char arr1[5];
   cin>>arr1;
   arr1[2]='\0';  // scape after 2nd index
   cout<<arr1;


// String overview with some operations and methods

string s="Saloni";
cout<<s;  // for fix size

string s;
cin>>s;
cout<<s;  // if we use space then it can;t consider it as it is 

string s;
getline(cin,s);
cout<<s<<endl;  // use this to print as it is 
cout<<s.size();


string s1="saloni", s2="Nigam";

s1.push_back('N');
s1=s1+'p';// for string use double quotes " "
s1.pop_back();
cout<<s1;


string s3=s1.append(s2);
string s3=s1+s2;
cout<<s3;  

string s="saloni is a \"good\" girl";
cout<<s;

}


//Q1. reverse of string 
#include<iostream>
using namespace std;
int main()

{
   string s;
   cout<<"Enter the string for reverse ";
   cin>>s;
   
   //reverse string
   int start=0,end=s.size();
   while(start<end)
   {
    swap(s[start],s[end]);
    start++;
    end--;
   }
   cout<<s;
} 


//Q2. find size of string without using size fun

#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int size=0;
    while(s[size]!='\0')
    {
        size++;
    }
    cout<<size<<" ";
}

 // Q3 Palindrome or not

#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string to check palindrome or not ";
    cin>>s;

    int start=0, end=s.size()-1;
    while (start<end)
    {
        if(s[start]!=s[end])
        {
            cout<<"Not a palindrrome";
            return 0;
        }
        else
        {
            start++;
            end--;
            
        }
    }
    cout<<"It is palindrome";
    return 0;
}