#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>arr;
    int n;
    cout<<"Enter the no. of element: ";
    cin>>n;
    arr.resize(n);

    cout<<"Enter the element in vector: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int target;
    cout<<"Enter the sum of 4 no. as a target value: ";
    cin>>target;

    if(n<4) {
        cout<<"Need at least 4 elements";
        return 0;
    }

    sort(arr.begin(), arr.end());

    for(int i=0;i<n-3;i++) // fix first number
    {
        // skip duplicates
        if(i > 0 && arr[i] == arr[i-1]) continue;

        for(int j=i+1;j<n-2;j++) // fix second number
        {
            // skip duplicates
            if(j > i+1 && arr[j] == arr[j-1]) continue;

            int ans = target - arr[i] - arr[j];
            int start = j+1, end = n-1;

            while(start < end)
            {
                int sum = arr[start] + arr[end];
                if(sum == ans)
                {
                    cout << "Quadruplet found: " << arr[i] << " "<< arr[j] << " " << arr[start] << " " << arr[end] << endl;
                    return 0;
                }
                else if(sum > ans)
                    end--;
                else
                    start++;
            }
        }
    }
    cout << "No quadruplet found";
    return 0;
}