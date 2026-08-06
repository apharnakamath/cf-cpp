#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s;

    string r = s;
    int k=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        r[k++] = s[i];
    }
    
    cin>>t;

    if(r==t) cout<<"YES";
    else cout<<"NO";
}