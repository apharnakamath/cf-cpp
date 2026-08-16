#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans = INT_MAX;
    
    while(n--)
    {
        int x;
        cin>>x;
        ans = min(ans, abs(x));
    }
    
    cout<<ans<<endl;
    
}
