//// while loop

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     while (i<=10)
//     {
//         cout<<i<<" ";
//         i++;
//     }
// }

//table using while

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, i=1;
//     cout<<"enter the no. of table";
//     cin>>n;
//     while (i<=10)
//     {
//         cout<<n*i<<endl;
//         i++;
//     }
// }

// //  factor
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, i=1;
//     cout<<"enter the no.";
//     cin>>n;
//     while (i<=n)
//     {    if (n%i==0)
//         {cout<<i<<" ";}
//         i++;
//     }
// }

// // even no.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1,n;
//     cout<<"enter the no. ";
//     cin>>n;
//     while (i<=n)
//     {
//     if (i%2==0)
//     {
//         cout<<i<<" ";

//     }
//     i++;
// }
// cout<<endl;
// return 0;
// }



// // odd no.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1,n;
//     cout<<"enter the no. ";
//     cin>>n;
//     while (i<=n)
//     {
//     if (i%2!=0)
//     {
//         cout<<i<<" ";

//     }
//     i++;
// }
// cout<<endl;
// return 0;
// }

// // do while 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1, sum=0;
//     while (i<=5)
//     {
//     sum= sum+i;
    
//     i++;
//     }
//   cout<<sum;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1, sum=0;
//     do{
//         sum=sum+i;

//         i++;
                
//     }while(i<=10);
//     cout<<sum;
// }

// // break cond.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i =1;
//     while(i<=10)
//     {
//         if(i==4)
//         break;
//         cout<<i<<" ";
//         i++;
//     }
// }

// // conntinue
// #include<iostream>
// using namespace std;
// int main()
// { 
//     int i;
//     for(i=1;i<=10;i++)
    
//       {  if(i%4==0)
        
//         continue;
//         cout<<i<<" ";
//       }
        
   
// }

// // switch 

#include<iostream>
using namespace std;
int main()
{
    int i=1;
    switch(i)
    {
        case 1:
        cout<<" monday";
        break;
        case 2:
        cout<<" tuesday";
        break;
        case 3:
        cout<<"wed";
        break;
        case 4:
        cout<<" thru";
        break;
        case 5:
        cout<<" fri";
        break;
        case 6:
        cout<<" sat";
        break;
        case 7:
        cout<<"sun";
        break;
        default:
        cout<<"error";
        break;
    }
}

