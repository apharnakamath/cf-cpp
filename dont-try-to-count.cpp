#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        
        string x,a;
        cin>>x>>a;
        int count = 0;
        
        while(x.find(a)==string::npos && x.size()<=n*m)
        {
            x += x;
            count++;
        }
        
        if(x.find(a)==string::npos) cout<<-1<<endl;
        else cout<<count<<endl;
    }
}
