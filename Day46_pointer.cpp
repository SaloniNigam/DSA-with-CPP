#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;

    cout<<"Address: "<<&arr[0]<<" "<<ptr<<endl; // dono same
    cout<<"Value: "<<arr[0]<<" "<<*arr<<endl; // dono 1

    cout<<"Address of arr[1]: "<<&arr[1]<<" "<<arr+1<<endl;

    cout<<"All values with pointer: ";
    for (int i=0;i<5;i++) {
        cout<<*ptr<<" "; // 1 2 3 4 5
        ptr++;
    }
    cout<<endl;

    ptr = arr; // WAPAS START PAR LAYA

    cout<<"All values with ptr[i]: ";
    for (int i=0;i<5;i++)
        cout<<ptr[i]<<" "; // 1 2 3 4 5
    cout<<endl;

    cout<<"All addresses: ";
    for (int i=0;i<5;i++)
        cout<<ptr+i<<" "; // har element ka address
    cout<<endl;

    // Ulta print
    ptr = arr + 4; // last element par gaye
    cout<<"Reverse: ";
    for(int i=0;i<5;i++) {
        cout<<*ptr<<" "; // 5 4 3 2 1
        ptr--;
    }
    cout<<endl;

    ptr = arr; // fir se start
    ptr = ptr + 3; // arr[3] = 4
    cout<<*ptr<<endl; // 4
    ptr = ptr - 2; // arr[1] = 2
    cout<<*ptr<<endl; // 2
}