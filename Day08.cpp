///program no. 1

#include<iostream>
using namespace std;
int main()

{ int i,j,n;
    cout<<"Input the number";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        //print  space
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        //print *
        for (j=1;j<i;j++)
        {
            cout<<"* ";
        }
        // next line 
        cout<<" "<<endl;
    }
    
}


///program no.2

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j,n;

//     cout<<"Input the number";
//     cin>>n;

//     for (i=1;i<=n;i=i+1)
//     {
//         for(j=1;j<=n-i;j=j+1)
//         {
//             cout<<"  ";
//         }
//         for(j=1;j<=i;j=j+1)
//         {
//             cout<<i<<" ";
           
//         } cout<<endl;
//     }
// }

// // program no. 3

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j;
//     int n;
//     cout<< "input the no.";
//     cin>>n;
 
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n-i;j++)
//         {
//             cout<<"  ";
//         }
//         for(j=1;j<=i;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// /program no.4

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j;
//     int n;
//     cout<<"enter the n";
//     cin>> n;

//     for (i=1;i<=n;i++)
//     {
//         for (j=1;j<=n-i;j++)
//         {
//             cout<<"  ";
//         }
//         for(char name='A'; name<='A'+i-1;name++)
//         {
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }

///program no. 5

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j,n;
//     cout<<"enter no.";
//     cin>>n;

//     for (i=1;i<=n;i++)
//     {
//         for(j=1;j<=n-i;j++)
//         {
//             cout<<"  ";
//         }
//         for(j=i;j>=1;j--)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }