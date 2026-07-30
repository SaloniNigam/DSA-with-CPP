    //Factorial for a large number
    
    #include<iostream>
    #include<string>
    #include<vector>
    #include<algorithm>
    using namespace std;
    int main()
    {

        int n;
        cout<<"Enter the number: ";
        cin>>n;

        vector<int>ans(1,1);
        
        while(n>1)
        {
            int carry=0, size=ans.size();
            
            for(int i=0;i<size;i++)
            {
                int res=ans[i]*n+carry;
                carry=res/10;
                ans[i]=res%10;
            }
        
        while(carry)
        {
            ans.push_back(carry%10);
            carry/=10;
        }
        n--;
        }
        reverse(ans.begin(),ans.end());
         for(int i=0; i<ans.size(); i++)
    {
        cout << ans[i];
    }
    cout << endl;
    return 0;


    }