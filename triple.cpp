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
        
        unordered_map <int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }
        
        bool found = false;
        
        for(auto &it:mp)
        {
            if(it.second >= 3) 
            {
                cout<<it.first<<endl;
                found = true;
                break;
            }
        }
        
        if(!found) cout<<-1<<endl;
    }
}
