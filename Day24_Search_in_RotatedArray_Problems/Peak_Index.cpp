#include<iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int n) { // function
    int start = 0, end = n - 1;

    while(start < end) { // < rakho, <= nahi
        int mid = start + (end - start) / 2;

        if(arr[mid] < arr[mid + 1]) {
            // hum abhi chadhai me hain, peak right me hai
            start = mid + 1;
        }
        else {
            // hum utrai me hain ya peak par hain, peak left me hai
            end = mid;
        }
    }
    return start; // start == end == peak index
}

int main() {
    int arr[1000];
    int n;
    cout << "Enter the size of array ";
    cin >> n;
    cout << "Enter the elements of array ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int peakIndex = peakIndexInMountainArray(arr, n);
    cout << "Peak Index: " << peakIndex << endl;
    cout << "Peak Element: " << arr[peakIndex] << endl;

    return 0;
}