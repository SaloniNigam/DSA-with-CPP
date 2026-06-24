//  //Arrary 
// //Array is a honogeneous type of data type which store data in a contigous memory location

// declearation

// #include<iostream>
// using namespace std;
// int main()
// {
// int a[5]={6,7,9,3,2};// declearation
// cout<<a[3];  // access tthrough index 
// }



// #include<iostream>
// using namespace std;
// int main()
// {
// int a[10];// declearation
// for (int i=0;i<10;i++)
// cin>> a[i];// input from user
// cout<<a[6];  // access value at index 6
// }



// // array access through loop
// #include<iostream>
// using namespace std;
// int main()
// {
// int arr[5]={1, 2, 3, 4, 5};// declearation
// for (int i=0;i<5;i++)
// cout<<arr[i]<<" ";  // access value of array
// return 0;
// }


// // using siizeof in arr
// #include<iostream>
// using namespace std;
// int main()
// {
// int a[5]={5, 4, 3, 2, 1};// declearation  // int a: 4  float a: 4  char a: 1
// // for (int i=0;i<5;i++)
// cout<<sizeof(a);
// return 0;
// }



// // size of individual element in arr
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={ 3, 4,5 ,4 ,3};
//     cout<<sizeof(arr)/sizeof(arr[0]);
//     return 0;
// }



// // find min value in arr

#include<iostream>
#include <climits> // For INT_MAX
using namespace std;
int main()
{ 
    int arr[5]={ 6, 4, 3, 8, 9 };
    int ans= INT_MAX;
    for (int i=0; i<5;i++)
    {
        if ( arr [i]<ans)
        ans=arr[i];
    }
    cout<<ans;
    return 0;
}

// // find max value in arr

// #include <iostream>
// #include <climits> // For INT_MIN
// using namespace std;

// int main() {
//     int arr[5] = {1, 12, 5, 9, 11};
//     int ans = INT_MIN; // Correct constant for int

//     for (int i = 0; i < 5; i++) {
//         if (arr[i] > ans) { // Removed the extra semicolon
//             ans = arr[i];
//         }
//     }

//     cout << ans;
//     return 0;
// }
