#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s[0]=='y' || s[0]=='Y')
        {
            if(s[1]=='e'||s[1]=='E')
            {
                if(s[2]=='s'||s[2]=='S') cout<<"YES";
                else cout<<"NO";
            }
            else cout<<"NO";
        }
        else cout<<"NO";

        cout<<endl;
    }
    
}