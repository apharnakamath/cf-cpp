#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        string b;
        b += s[0];
        
        for(int i=1;i<s.size();i+=2)
        {
            b += s[i];
        }

        cout<<b<<endl;
    }
}