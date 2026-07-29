//Add String - LeetCode 415
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string add(string num1, string num2)
{
    string ans;
    int index1 = num1.size()-1, index2 = num2.size()-1;
    int carry = 0, sum;

    while(index1 >= 0 || index2 >= 0 || carry) 
    {
        sum = carry;
        if(index1 >= 0) sum += (num1[index1] - '0');
        if(index2 >= 0) sum += (num2[index2] - '0');

        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index1--;
        index2--;
    }

    reverse(ans.begin(), ans.end());
    return ans; 
}

int main()
{
    string num1, num2;
    cout<<"Enter num1 and num2 values: ";
    cin>>num1>>num2;

    string result = add(num1, num2);
    cout<<"Sum of two number is: "<<result << endl;
    return 0;
}