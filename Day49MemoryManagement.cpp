#include<iostream>
using namespace std;
int main()
{
    int *ptr=new int;
    *ptr=5;//value assign
    cout<<*ptr<<endl; //o/p-5
    cout<<ptr<<endl; //o/p-0x1161720  
    
    float *ptr2=new float;
    *ptr2=6.3;
    cout<<*ptr2<<endl;  //o/p-6.3

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

   int *p= new int[n];

   // valur entered
   for(int i=0;i<n;i++)
   p[i]=i+1;

   // valur print
   for(int i=0;i<n;i++)
   cout<<p[i]<<endl;

   //delete keyword use
   delete ptr;
   delete ptr2;
   delete[] p;

}