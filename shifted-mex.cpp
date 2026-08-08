#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        set <int> s;
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            s.insert(a);
        }
        
        int current = 0;
        int prev = INT_MIN;
        int ans = 0;
        
        //the problem is basically to find the longest consecutive sequence of distinct numbers
        
        for(int x : s)
        {
            if(prev!=INT_MIN && x==prev+1) current++;
            else current = 1;
            
            ans = max(ans,current);
            prev = x;
        }
        
        cout<<ans<<endl;
    }

    return 0;
}
