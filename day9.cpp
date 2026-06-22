/// program1 

// #include<iostream>
// using namespace std;
// int main()

// { int i,j;
//     for (i=1;i<=7;i++)
//     {
//         for (j=1;j<=7-i;j++)
//         { cout<<" ";
//         }
//         for (j=1;j<=i;j++)
//         {
//             cout<<"*";
//          }cout<< endl;
//     }
// }
//  print ho raha h 

///  program 2

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j;
//     for (i=1;i<=4;i++)
//     {
//         for(j=1;j<=4-i;j++)
//         {
//             cout<<" ";
//         }
//         for(j=1;j<=i;j++)
//         {
//             cout<<i;
//         }cout<<endl;
//     }
// }
// code runs


/// proggram 3

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i, j,n;
//     cout<<"enter no.";
//     cin>> n;

//     for (i=1;i<=n;i++)
//     {
//         for(j=1;j<=n-i;j++)
//         {
//             cout<<"  ";
//         }
//         for(j=1;j<=2*i-1;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


/// program no. 4

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j,n;
//     cout<<"enter no.";
//     cin>> n;

//     for (i=1;i<=n;i++)
//     {
//         for (j=1;j<n-i;j++)
//           cout<<"  ";
        
//         for(j=1;j<=i;j++)
//         cout<<j<<" ";
    
//         for(j=i-1;j>=1;j--)
//             cout<<j<<" ";
    
//         cout<<endl;

//     }
// }

///  program no. 5


// #include<iostream>
// using namespace std;
// int main()
// {
//     int i, j, n;
//     cout<<"enter no.";
//     cin>>n;

//     for (i=1;i<=n;i++)
//     {
//         for(j=1;j<i-1;j++)
//         {
//             cout<<"  ";
//         }
//         for(j=1;j<=(2*n-1)-2*(i-1);j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl<<" ";
//     }
// }

// /method 2 p no. 5

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j,n;
//     cout<<"enter the no.";
//     cin>>n;
//     for (i=n;i>=1;i--)
//     {   
//         //print space
//         for(j=1;j<=n-i;j++)
//         {
//             cout<<"  ";
//         }
//         //print pattern
//         for(j=1;j<=2*i-1;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

///program no. 6


// #include<iostream>
// using namespace std;
// int main()
// {   
//     int i,j,n;
//     cout<<"enter no";
//     cin>> n;

//     for (i=n;i>=1;i--)
//     {   //stAR
//         for(j=1;j<=i;j++)
//         {
//             cout<<"* ";
//         }
//         //SPACE
//         for(j=1;j<=2*n-2*i;j++)
//         {
//             cout<<"  ";
//         }
//         //star
//         for(j=1;j<=i;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

// for (i=1;i<=n;i++)
//     {   //stAR
//         for(j=1;j<=i;j++)
//         {
//             cout<<"* ";
//         }
//         //SPACE
//         for(j=1;j<=2*n-2*i;j++)
//         {
//             cout<<"  ";
//         }
//         //star
//         for(j=1;j<=i;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// /program no. 7

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i ,j ,n;
//     cout<<"enter the no.";
//     cin>>n;

//     for(i=1;i<=n;i++)
//     {
//         //star
//         for(j=1;j<=i;j++)
//         {
//             cout<<"* ";
//         }
//         for(j=1;j<=(2*n)-(2*i);j++)
//         {
//         cout<<"  ";
//         }
//         for(j=1;j<=i;j++)
//        { 
//         cout<<"* ";
//     }
//     cout<<endl;
//     }


//     for(i=n-1;i>=1;i--)
//     {
//         //star
//         for(j=1;j<=i;j++)
//         {
//             cout<<"* ";
//         }
//         for(j=1;j<=(2*n)-(2*i);j++)
//         {
//         cout<<"  ";
//         }
//         for(j=1;j<=i;j++)
//        { 
//         cout<<"* ";
//     }
//     cout<<endl;
//     }
    
// }

///program no. 8

#include<iostream>
using namespace std;
int  main()
{
    int i,j,n;
    cout<<"enter no.";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for(j=1;j<=n-i;j++)
         {
            cout<<" ";
        }
        cout<<endl;
    }

    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for(j=1;j<=n-i;j++)
         {
            cout<<" ";
        }
        cout<<endl;
    }
}