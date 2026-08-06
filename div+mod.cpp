#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        long long int l,r,a;
        cin>>l>>r>>a;
        long long int ans = LLONG_MIN;

        for(int i=l;i<=r;i++)
        {
            long long int p = i/a + i%a;
            ans = max(ans,p);
        }
        
        cout<<ans<<endl;
    }
}