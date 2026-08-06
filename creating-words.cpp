#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string a,b;
        cin>>a>>b;

        string c,d;
        c += b[0];
        d += a[0];

        for(int i=1;i<a.size();i++)
        {
            c += a[i];
        }

        for(int i=1;i<b.size();i++)
        {
            d += b[i];
        }

        cout<<c<<" "<<d<<endl;
    }
}