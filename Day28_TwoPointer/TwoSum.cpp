#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> ans;
    int number[1000];
    int n;

    cout << "Enter the no. of element: ";
    cin >> n;

    cout << "Enter the element in the array in sorted order: ";
    for(int i = 0; i < n; i++)
        cin >> number[i];

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int start = 0, end = n - 1;
    bool found = false;

    while(start < end) {
        int sum = number[start] + number[end];

        if(sum == target) {
            ans.push_back(start + 1); // 1-based index
            ans.push_back(end + 1);
            found = true;
            break; // mil gaya to ruk jao
        }
        else if(sum < target)
            start++;
        else
            end--;
    }

    if(found) {
        cout << "Indices: ";
        for(int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " "; // vector ko aise print karo
        }
    } else {
        cout << "No pair found";
    }

    return 0;
}