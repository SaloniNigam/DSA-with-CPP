// Aggresive Cow Problem in Binary Search

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //taking input from user in array
    int stalls[1000];
    int n;
    cout<<"Enter the size of stalls ";
    cin>>n;
    cout<<"Enter the no. of space in stalls ";
    for(int i=0;i<n;i++)
    {
        cin>>stalls[i];
    }
    // no. of cows 
    int k;
    cout<<"Enter the no. of cow assign in stalls ";
    cin>>k;

        // sort the array for default case
         sort(stalls, stalls + n);

        int start = 1;
        int end = stalls[n-1] - stalls[0];    // end value is distance difference b/w last- first index
        int ans = 0; 
        int mid;

        while(start <= end) {
            mid = start + (end - start) / 2;

          
            int count = 1;
            int pos = stalls[0];
            
            for(int i = 1; i < n; i++) {
                if(stalls[i] - pos >= mid) { 
                    count++;
                    pos = stalls[i];
                }
                if(count >= k) break; 
            }

            if(count < k) {
                end = mid - 1; 
            } else {
                ans = mid; 
                start = mid + 1;
            }
        }
        cout<<"The min. distance we can assign for cow is: "<< ans;
    }
