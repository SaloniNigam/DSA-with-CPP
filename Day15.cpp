//Day 15

// problem solving 

// // convert 'a' into 'A'

// #include<iostream>
// using namespace std;
 
// char convert(char name)
// {
//     char ans= name-'a'+'A';
//     return ans;
// }
// int main()
// {
//     char name;
//     cout<<" enter the charter ";
//     cin>>name;
//     cout<<convert(name);
//     return 0;
// }

// // armstrong no.

// #include<iostream>
// #include<cmath>
// using namespace std;
// int countDigit(int n)
// {
//     int count=0;
//     while(n)
//     {
//         count+=1;
//         n/=10;
//     }
//     return count;
// }

// bool armstrong(int num, int digit)
// {
//     int n=num, ans=0, rem;
//     while(n)
//     {
//         rem=n%10;
//         n=n/10;
//         ans= ans+ pow(rem,digit);

//     }
//     if (ans== num)
//         return 1;
//     else
//        return 0;
// }

// int main()
// {
//     int num;
//     cout<<"enter the no.";
//     cin>>num;
//     int digit = countDigit(num);
//     cout<<armstrong(num, digit);

// }


// // find trailing zeros in a factor

// #include<iostream>
// using namespace std;
// int main(){


// int n;
// cout<<"enter the no.";
// cin>>n;

// int count=0;
// while(n>=5)
// {
//     count+=n/5;
//     n/=5;
// }
// cout<<count;
// }

// // check formation of rectangle or not

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c,d;
//     cout<<"Enter the value of a,b,c and d in sequence ";
//     cin>>a>>b>>c>>d;
//     if ((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))
//     cout<< "It is rectangle";
//     else
//     cout<<"Not a rectangle";
// }

// Bishop

#include<iostream>
using namespace std;

 
int main()
{
    int total=0;
    int A,B;
    cin>>A>>B;
    
    total+=min(8,8);
    total+=min(8-A,B-8);
    total+=max(A-8,8-B);
    total+=max(A-1,B-1);

    cout<< total;
}