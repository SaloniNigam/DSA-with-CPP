
#include<iostream>
using namespace std;

int main()
{
    int target;
    cout << "Enter number for sqrt: ";
    cin >> target;
    
    if (target < 2) {
        cout << target;
        return 0;
    }
    
    int start = 1, end = target, mid, ans = 0;
    
    while(start <= end)
    {
        mid = start + (end - start) / 2;
        
        // mid * mid overflow ho sakta hai, isliye mid == target/mid use kiya
        if(mid == target / mid)
        {
            ans = mid;
            break;
        }
        else if (mid < target / mid)
        {
            ans = mid;        // ye floor value store kar lega
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    
    cout << "Sqrt is: " << ans;
    return 0;
}