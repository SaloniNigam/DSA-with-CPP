// Vector in C++

//  Standard Template Library (STL)

#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;

int main()
{

//    // vector v and v1 used here
//     // create a vector, declare 
//     vector<int>v;
//     vector<int>v1(5,1);  // size, value
//     // size and capacity
//     cout<<"Size of v: "<<v.size()<<endl;
//     cout<<"capacity of v: "<<v.capacity()<<endl;
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(10);
//     cout<<"Size of v: "<<v.size()<<endl;
//     cout<<"capacity of v: "<<v.capacity()<<endl;


//     // update value 
//     v[1]=5;
//     // size and capacity of v1
//     cout<<"Size of v1: "<<v1.size()<<endl;
//     cout<<"capacity of v1: "<<v1.capacity()<<endl;

//     v1.push_back(8);
//     cout<<"Size of v1: "<<v1.size()<<endl;
// cout<<"capacity of v1: "<<v1.capacity()<<endl;


// // Declare value from vector
// // vectr vnew is used here

// vector<int> vnew;
// // insert value
// vnew.push_back(4);
// vnew.push_back(41);
// vnew.push_back(411);
// vnew.push_back(74);
// vnew.push_back(54);
// // remove value from last
// vnew.pop_back();


// cout<<"Size of vnew: "<<vnew.size()<<endl;
// cout<<"capacity of vnew: "<<vnew.capacity()<<endl;

// // erase value from 1st index or any value use the index no. like here 1st index is erase
// vnew.erase(vnew.begin()+1);  
// cout<<"Size of vnew: "<<vnew.size()<<endl;
// cout<<"capacity of vnew: "<<vnew.capacity()<<endl;
// for(int i=0;i<vnew.size();i++)
// cout<<vnew[i]<<" ";

// // insert value at any index like here at 1st index 
// vnew.insert(vnew.begin()+1,50);
// cout<<endl;
// for(int i=0;i<vnew.size();i++)
// cout<<vnew[i]<<" ";
// cout<<endl;

// vnew[1]=37;   // assign value 
// for(int i=0;i<vnew.size();i++)
// cout<<vnew[i]<<" ";
// cout<<endl;
// vnew.clear();   // remove all value from vector
// cout<<"Size of vnew: "<<vnew.size()<<endl;
// cout<<"capacity of vnew: "<<vnew.capacity()<<endl;

// // vector arr used here 

// vector<int>arr;
// arr.push_back(2);
// arr.push_back(112);
// arr.push_back(24);
// arr.push_back(82);
// // for 1st index value
// cout<<arr[0]<<endl;
// cout<<arr.front()<<endl;

// // for last index value
// cout<<arr[arr.size()-1]<<endl;
// cout<<arr.back()<<endl;

// vector <int>a;
// // copy the value of 1 vector to another 
// a=arr;
// cout<<a.size();
// for(int i=0;i<a.size();i++)
// cout<<a[i]<<" ";
// cout<<endl;

// cout<<arr.size();
// cout<<endl;
// for(auto it=arr.begin();it!=arr.end();it++)
// {
//     cout<<*it<<" ";
// }
// cout<<endl;
// for(auto i: arr)
// cout<<i<<" ";

// // vector ans used here 

 vector<int>ans;
ans.push_back(2);
ans.push_back(112);
ans.push_back(24);
ans.push_back(82);
ans.push_back(235);

// sorting in increasing order 
sort(ans.begin(),ans.end()); //  vector algorithm is used for sort fun.
for (int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";
cout<<endl;



// // sorting in decreasing order
// sort(ans.begin(),ans.end(),greater<int>()); //  vector algorithm is used for sort fun.
// for (int i=0;i<ans.size();i++)
// cout<<ans[i]<<" ";
// cout<<endl;

// searching in binary search
cout<<binary_search(ans.begin(),ans.end(),24)<<endl;



// finding the element in vector
cout<<"Find: "<<find(ans.begin(),ans.end(),112)-ans.begin()<<endl;

// count
cout<<"count: "<<count(ans.begin(),ans.end(),2)<<endl;

//max and min
auto max_it = max_element(ans.begin(), ans.end());
cout << "Max: " << *max_it << endl; // * lagana jaruri hai

auto min_it = min_element(ans.begin(), ans.end());
cout << "Min: " << *min_it << endl;
}