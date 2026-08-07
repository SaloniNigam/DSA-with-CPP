// Double and Triple Pointer

#include<iostream>
using namespace std;

int main()
{
    int n=10;
    int *p=&n; // single pointer
    int **p2=&p; // double pointer
    int ***p3=&p2; // triple pointer
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<&p2<<endl;
    cout<<p3<<endl;
    cout<<&p3<<endl;

    // modify value of n

    ***p3=***p3+10;
    cout<<n<<endl;

   
}


//Pass by pointer - value change
#include<iostream>
using namespace std;
void fun(int *p1)
{
    *p1=*p1+10;
}
int main()
{
    int n=10;
    int *p=&n; // single pointer
    int **p2=&p; // double pointer
     fun(p);
    cout<<*p<<" ";
}



//  Pass by pointer - address changecpp
#include<iostream>
using namespace std;
void fun(int *p1)
{
    p1++;
}
int main()
{
    int n=10;
    int *p=&n; // single pointer
    int **p2=&p; // double pointer

    cout<<p<<endl;
     fun(p);
    cout<<p<<" ";
}


//Pass by double pointer - address change
#include<iostream>
using namespace std;
void fun(int **p1)
{
    *p1=*p1+1;
}
int main()
{
    int n=10;
    int *p=&n; // single pointer
    int **p2=&p; // double pointer

    cout<<p<<endl;
     fun(p2);
    cout<<p<<" ";
}