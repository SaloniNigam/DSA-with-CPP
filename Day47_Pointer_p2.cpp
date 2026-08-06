//Q1 value or address
#include<iostream>
using namespace std;
int main()
{
    char arr[5]="1234";
    char *ptr=arr;
    cout<<arr<<endl; // value print hoga 123
    cout<<ptr<<endl; // value print hoga

    cout<<(void*)arr<<endl; //  print address  like 0x61ff03
    cout<<(void*)ptr<<endl; //  print address 

    char name='a';
    char *ptr1=&name;
    cout<<(void*)&name<<endl; //0x61ff02 
    cout<<(void*)ptr1<<endl;
}


//Q2  increment 
#include<iostream>
using namespace std;
//use either comment or line below comments 

// void incr(int &n)  
void incr(int *ptr)
{
    // n++;
    *ptr=*ptr+1;
}
int main()
{
    int num=10;
    int temp=num;
    // incr(num); 
    incr(&num);
    cout<<num;
    
}


//Q3 double the value using function
#include<iostream>
using namespace std;

void dob(int ptr[])
{
    for(int i=0;i<5;i++)
    ptr[i]=2*ptr[i];
}
int main()
{
    int arr[5]={1,2,3,4,5};
     dob (arr);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    
}


 // Q4 swapping using pass by pointer
#include<iostream>
using namespace std;
void swapping(int *p1,int *p2) // pass by pointer
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
    int first=23, second=11;
    swapping(&first,&second);
    cout<<"first: "<<first<<" "<<"second:"<<second;
}


// Q5 swapping using pass by reference 
#include<iostream>
using namespace std;
void swapping(int &p1,int &p2) //pass by reference
{
    int temp=p1;
    p1=p2;
    p2=temp;
}
int main()
{

        int num=10;
        int &temp=num; // temp or num same hi h
        cout<<temp<<endl;
        temp++;
        cout<<num<<endl;
        cout<<&temp<<endl;
        cout<<&num<<endl; // same address but diff names


    int first=23, second=11;
    swapping(first,second);
    cout<<"first:"<<first<<" "<<"second:"<<second;
}


// Q6 Change the value of vector 
#include<iostream>
#include<vector>
using namespace std;

void pass(vector<int>&v1)
{
    for(int i=0;i<5;i++)
    v1[i]=10;
}
int main()
{
    vector<int>v(5,0);
    pass(v);
    for(int i=0;i<5;i++)
    cout<<v[i]<<" ";
}