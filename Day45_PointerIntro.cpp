#include<iostream>
using namespace std;
int main()
{
    int a=10;
    cout<<&a<<endl;// address of a=0x61ffoc is in hexadecimal
     int *ptr=&a;
    cout<<sizeof(ptr)<<endl; // size=4 depand on memory size 
   
    cout<<ptr<<endl;  //  address of a
    cout<<*ptr<<endl; // valuse of a

    float m=2.6;
    float*ptr1=&m;
    cout<<ptr1<<endl; // address of m

    int b=20;
    int *ptr2=&b;
    cout<<ptr2<<endl; // address of b
    b=30;
    cout<<*ptr2<<endl;  // updated value of b

}