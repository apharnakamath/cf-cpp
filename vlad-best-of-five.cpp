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
        
        int acount = 0, bcount = 0;
        for(char c:s)
        {
            if(c=='A') acount++;
            else if(c=='B') bcount++;
        }

        if(acount>bcount) cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }
}