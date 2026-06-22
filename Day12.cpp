// //decimal to binary

// #include<iostream>
// using namespace std;
// int main()
// {   int num;
//     cout<<"enter the decimal no. ";
//     cin>> num;
//     int rem, ans=0,mul=1;
//     while(num>0)
//     {
//         rem=num%2;
//         num=num/2;    // num=num>>1;
//         ans+=rem*mul;
//         mul*=10;
//     }
//     cout<< ans<<endl;
    
// }

// // binary to decimal

// #include<iostream>
// using namespace std;
// int main()
// {   int num;
//     cout<<"enter the binary  no. ";
//     cin>> num;
//     int rem, ans=0,mul=1;
//     while(num>0)
//     {
//         rem=num%10;
//         num=num/10;    
//         ans+=rem*mul;
//         mul*=2;
//     }
//     cout<< ans<<endl;
    
// }

// // oct to dec

// #include<iostream>
// using namespace std;
// int main()
// {   int num;
//     cout<<"enter the octal  no. ";
//     cin>> num;
//     int rem, ans=0,mul=1;
//     while(num>0)
//     {
//         rem=num%10;
//         num=num/10;    
//         ans+=rem*mul;
//         mul*=8;
//     }
//     cout<< ans<<endl;
    
// }

// // dec to octal
// #include<iostream>
// using namespace std;
// int main()
// {   int num;
//     cout<<"enter the decimal  no. ";
//     cin>> num;
//     int rem, ans=0,mul=1;
//     while(num>0)
//     {
//         rem=num%8;
//         num=num/8;    
//         ans+=rem*mul;
//         mul*=10;
//     }
//     cout<< ans<<endl;
    
// }
