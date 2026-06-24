// //  Day 13

// // add digit

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"enter the num:";
//     cin>> num;
    
//     while(num>9)
//     {
//     int rem,ans=0;
//     while(num!=0)
//     {
//         rem=num%10;
//         num=num/10;
//         ans=rem+ans;
        
//     }
//     num=ans;
//     }
//     cout<<num<< endl;

// }

// // leap year

//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//     int n;
//     cout<< " enter the year";
//     cin>> n;
//     if (n%400==0)
//     {
//        cout<<" leap year";
//     }
//     else if (n%4==0 && n%100!=0)
//     {
//         cout<<" leap year";
//     }
//     else{
//       cout<< " not a leap year";
//     }
//  }



// // reverse integer

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"enter the no ";
//     cin>>num;
//     int rem, ans=0;
//     while (num!=0)
//     {
//         /* code */
//         rem=num%10;
//         num/=10;
//         if(ans>INT8_MAX/10 || ans<INT8_MIN/10)
//             { cout<<"out of bound";}


//     ans=ans*10+rem;
//     }
//     cout<<ans;
// }



// // power of two
// #include<iostream>
// using namespace std;
// int main()
// {
//  int n;
//  cout<< "enter the no. and check the power of 2 ";
//  cin>> n;

//  if (n<1)
//         {
//         return false;
//         }
//         while(n!=0)
//         {
//             if(n%2==1)
//                return false;
//              n=n/2;
//         }
//                return true;
        
//     }



// // palindrome
#include<iostream>
using namespace std;
int main()
{
    int n,num, rem, ans=0;
    cout<<"enter the no. ";
    cin>>num;
    // n=num;
    if(num<0){
     cout<<"not a palindrome";
     return 0;
    }

    n=num;
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        if (ans>INT8_MAX/10 )
       {
        cout<<"out of bound";
        return 0;
          }
    ans=ans*10+rem;
    }
    if (ans == num)
    cout<<num<<" is a palindrome";
    else{
        cout<<num<<" is not a palindrome ";
    }
    return 0;
}



