// Frequencies in limited array

#include<iostream>
#include<vector>
using namespace std;

vector<int> frequencyCount(vector<int>& arr) {
    int n = arr.size();

    // 0-based kar do
    for(int i = 0; i < n; i++)
        arr[i]--;

    //  index pe n add karke frequency mark karo
    for(int i = 0; i < n; i++)
    {
        int index = arr[i] % n;
        arr[index] += n;
    }

    vector<int> ans(n);

    //  frequency nikaalo
    for(int i = 0; i < n; i++)
    {
        ans[i] = arr[i] / n; 
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements (1 to n): ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> ans = frequencyCount(arr);

    cout << "Frequency: ";
    for(int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}