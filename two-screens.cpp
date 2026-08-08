#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        
        int common = 0;
        int ans = 0;
        
        while(common<a.size() && common<b.size() && a[common]==b[common]) common++;
        
        if(common==0) ans = a.size()+b.size();
        else ans = a.size()+b.size()-common+1;
        
        cout<<ans<<endl;
    }
}
