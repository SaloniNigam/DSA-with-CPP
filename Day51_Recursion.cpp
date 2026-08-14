// 1. Using iterative method print n day left for birthday and then finaaly HBD

#include<iostream>
using namespace std;
int main()
{
    int n=100;
    // iterative approach
    for(int i=n;i>0;i--)
    {
        cout<<i<<"days left for birthday\n";
    }
    cout<<"Happy Birthday";
}

// 2. same code using function call

#include<iostream>
using namespace std;

void fun3(int n)
{
    cout<<n<<" days left for birthday\n";
}
void fun2(int n)
{
    cout<<n<<" days left for birthday\n";
}
void fun1(int n)
{
    cout<<n<<" days left for birthday\n";
}
void fun0(int n)
{
    cout<<"Happy birthday\n";
}
int main()
{
    int n=3;
    fun3(3);
    fun2(2);
    fun1(1);
    fun0(0);
}

// 3. another optimize approach for this code

#include<iostream>
using namespace std;
void fun0(int n)
{
    cout<<"Happy Birthday\n";
}
void fun1(int n)
{
    cout<<n<<" days left for birthday\n";
    fun0(0);
}
void fun2(int n)
{
    cout<<n<<" days left for birthday\n";
    fun1(1);
}
void fun3(int n)
{
    cout<<n<<" days left for birthday\n";
    fun2(2);
}

int main()
{
    int n=3;

    fun3(3);
}

// 4. final best approoach for this code using recursion 

#include<iostream>
using namespace  std;
void fun3(int n)
{
    //base condition
    if(n==0)  // base case is very imp if we don't use it run util satck is overflow and show segmentation error
    {
    cout<<"Happy Birthday\n";
    return;
    }
    cout<<n<<" days left for birthday\n";
    fun3(n-1);
}
int main()
{
    int n=3;
    fun3(3);
}

// 5. code for print n to 1 numbers using recursion

#include<iostream>
using namespace std;

void fun5(int n) // fun5 is function name
{
    // base case 
    if(n==1) // where code will be terminated
    {
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    fun5(n-1);
}
int main()
{
    int N=5;
    fun5(5);
}

// 6. same cade as above but using iterative method

#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=n;i>0;i--)
    cout<<i<<endl;
}

// 7. print even no. using recursion method

#include<iostream>
using namespace std;
void even(int n)
{
    // base case 
    if(n==2)
    {
        cout<<2<<endl;
        return;
    }
    cout<<n<<endl;
    even(n-2);
}
int main()
{
    int n=100;
    even(n);
}