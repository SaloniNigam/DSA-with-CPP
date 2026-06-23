// function in c++
// Day 14: 23 june- function :  prime no, factorial, void , sum of two  no. , pass vy value and reference and func overlaodin 

// // prime No. and factorial func.

// #include<iostream>
// using namespace std;

// // prime no.

// bool prime(int n)
// {
//     if (n<2)
//         return 0;

//     for(int i=2;i<n;i++)
//     {
//         if(i%2==0)
//         return 0;
//     }
//     return 1;
// }
// // factorial 

// int fact(int n)
// {
//     int ans =1;
//     for(int i=1;i<=n; i++)
//     {
//         ans*=i;
//     }
//     return ans;
// }


// int main()
// {   int a,b;
//     cout << "enter the no.";
//     cin>>a>>b;
    
//     cout<<fact(a)<<endl;
//     cout<<fact(b)<<endl;
//     cout<<prime (a)<<endl;
//     cout<<prime(b)<<endl;
//     cout<<prime(b-a)<<endl;
//     cout<<fact(b-a)<<endl;
// }


// //void function
// // print hello world using void func.

// #include<iostream>
// using namespace std;

// void fun()
// {
//     cout<<"Hello World";
// }
// int main()
// {fun();

// }



// // sum of two no.

// #include<iostream>
// using namespace std;

// int Sum(int a, int b)
// {
//     int ans=a+b;
//     return ans ;
// }

// int main()
// {
//     int m,n,o,p;
//     cout<<" enter the no. ";
//     cin>>m>>n>>o>>p;
//     cout<<Sum(m,n)<<endl;
//     cout<<Sum(o,p);
// }

// // note default parameter 
//  // int fact(int n=2) here the value of n is default 


// // pass by value
// #include<iostream>
// using namespace std;

// void Incr(int n){
//     ++n;
// }
// int main()
// {
//     int a=10;
//     Incr(a);
//     cout<<a; 
// }

// // pass by reference
// #include<iostream>
// using namespace std;

// void Incr(int &a){
//     ++a;
// }
// int main()
// {
//     int a=10;
//     Incr(a);
//     cout<<a; 
// }


// // swapping of two no. using func.

// note: function overloading-  same method different parameter like here same method swap use for different parament like int and float
#include<iostream>
using namespace std;

void swap(int &a, int &b )// pass by reference
{
    int c;
    c=a;
    a=b;
    b=c;
}
void swap(float &c, float &d )// function overloading 
{
    float e;
    e=c;
    c=d;
    d=e;
}

int main()
{
    int a, b;
    cin>> a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<" ";
    
    cout<<endl;
    float f1=4.5,f2=6.9;
    // cin>>f1>>f2;   // remove value then comment out this
    swap(f1,f2);
    cout<<f1<<" "<<f2<<" ";
}