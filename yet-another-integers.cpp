#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        long long int ans = 0;

        long long int c = abs(a-b);
        ans = (c+9)/10;

        cout<<ans<<endl;
    }
}