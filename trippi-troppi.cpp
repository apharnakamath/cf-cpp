#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s,t,r;
        cin>>s>>t>>r;

        string f ="";
        f += s[0];
        f += t[0];
        f += r[0];
        cout<<f<<endl;
    }
}