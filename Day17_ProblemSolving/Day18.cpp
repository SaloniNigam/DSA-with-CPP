// Time and Space complexity
  
// time complexity- it is a total time taken by an algoorithm to run as a fun. of length of the input.


// Example 1
#include<iostream>
using namespace std;
int main()
{  int n;
    for(int i=1;i<=n;i++)
    for(int j=1; j<n;j++)
    {
        cout<<"Hello";
    }

}    //  comlexity  O(n^2)



// Example 2
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    for(i=1;i<=n;i++)
    for(j=1;j<=i;j++)
    {
        cout<<"hello";
    }
}   // complexity  O(n^2)



// Example 3
#include<iostream>
using namespace std;
int main()
{
    int i,j ,n;
    for(i=1;i<=n;i++)
    for(j=1;j<=i*i;j++)
    {
        cout<<"hello";
    }
}    // time- O(n^3)




// Example 4
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m;
  for (i=1;i<n;i++)
  for(j=1;j<=m;j++)
  {
    cout<<"hello";
  } 
} // time-O(nm)




// Example 5
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    for(i=1;i<=n;i++)
    for(j=1;j<=i*i;j++)
    for(k=1;k<n/2;k++)
    {
        cout<<"hello";
    }
}    // time- O(n^4)




// Example 6
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    for(i=1;i<=n;i=i*2)
    {
        cout<<"hello";
    }
    
}  // time-  O(logn)



// Example 7
#include<iostream>
using namespace std;
int main()
{
    int i,j,k ,n;
    for(i=n/2 ;i<=n;i++)
    for(j=1;j<n/2;j++)
    for(k=1;k<=n;k++)
    {
        cout<<"hello";
    }
    
}   //O(n^3)



// Example 8
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    for(i=n/2;i<=n;i++)
    for(j=1;j<=n;j=2*j)
    for(k=1;k<=n;k=2*k)
    {
        cout<<"hello";
    }
    
}  //     n/2* log n* log n  = O(nlogn)^2



// Example 9
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    for(i=1;i<n;i++)
    for(j=1;j<=n;j=j+i)
    {
        cout<<"hello";
    }
}  //  time complexity - O(n log(e) n)


// Space complexity- it is a space taken by an algorithm as a fun. of length of the input.
// it is two types auxillary space and total sspace complexity. mainly use auxillary space 

#include<iostream>
using namespace std;
int main()
{
    int i,n;
for( i=1;i<n;i++ )
{
    cout<<i;
}
}// space complexity is O(1)



// ORDER OF COMPLEXITY

// O(1)< O(log n)< O(root n)<O(n)< O(n log n)< O(n^2)< O(n^3)<O(2^n)< O(n!)