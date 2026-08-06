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

        int d = s.size();
        string p = "";
        if(s[d-1]=='s' && s[d-2]=='u')
        {
            for(int i=0;i<s.size()-2;i++)
            {
                p += s[i];
            }
            
            p += 'i';
        }

        cout<<p<<endl;
    }
}