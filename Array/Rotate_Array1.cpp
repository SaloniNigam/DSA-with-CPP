#include<iostream>
using namespace std;

int main()
{
    int arr[10];

    cout << "Enter 10 numbers: ";
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int temp = arr[9];

    for(int i = 8; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[0] = temp;

    cout << "Array after rotation: ";
    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}