// find missing no.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 5};

    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    int n = size + 1;
    int ans = n * (n + 1) / 2;

    cout << "Missing Number = " << ans - sum;

    return 0;
}
