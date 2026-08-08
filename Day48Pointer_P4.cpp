// Questions using pointer easy to hard 

//  Q1   o/p-2024
#include<iostream>
using namespace std;
int main()
{
    char c[]="GATE2024";
    char *p=c;
    cout<<p+p[3]-p[1];
}


//Q2  o/p-0 2
#include<iostream>
using namespace std;

void second (int *p1,int *p2)
{
    p1=p2;
    *p1=2;
}
int main()
{
    int i=0,j=1;
    second(&i,&j);
    cout<<i<<" "<<j<<endl;
}


//  Q3 0/p-1 0
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int x=0;
    ptr=&x;
    int y=*ptr;
    *ptr=1;
    cout<<x<<" "<<y<<endl;
}

//Q4  o/p-11 15
#include<iostream>
using namespace std;
int main()
{
    int a=5,b=10;
    int &name=a;
    int *ptr=&a;
    (*ptr)++;
    ptr=&b;
    *ptr=*ptr+5;
    name+=5;
    cout<<a<<" "<<b;
}

//Q5  o/p-19
#include<iostream>
using namespace std;
int four(int x, int *py,int **ppz)
{
    int y,z;
    **ppz+=1; z=**ppz;
    *py+=2; y=*py;
    x+=3;
    return x+y+z;
}

int main()
{
    int c,*b,**a;
    c=4; b=&c; a=&b;
    cout<<four(c,b,a);
}

//Q6  o/p-rohan
#include<iostream>
using namespace std;
void five(char *str1,char*str2)
{
    while(*str1=*str2)
    {
        str1++,str2++;
    }
}
int main()
{
    char first[]="mohit";
    char second[]="rohan";
    five(first,second);
    cout<<first;
    return 0;
}

// Q7  o/p-address(0x61ff08)

#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int *p=&n;
    int **q=&p;
    cout<<p<<endl;
}