#include <bits/stdc++.h>
using namespace std;

//isnt passing testcases - try again

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        int ans = 0;
        int count = 0;
        
        for(char c:s)
        {
            if(c=='.') count++;
            else 
            {
                ans += min(count,2);
                count = 0;
            }
        }
        
        ans += min(count,2);
        
        cout<<ans<<endl;
    }
    
}
