#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        int maxi = max({a,b,c});
        int mini = min({a,b,c});
        
        if(a!=mini && a!=maxi) cout<<a<<endl;
        else if(b!=mini && b!=maxi) cout<<b<<endl;
        else cout<<c<<endl;
    }
}
