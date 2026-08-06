#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a;
        string s;
        cin>>a>>s;

        if(a!=5)
        {
            cout<<"NO"<<endl;
            continue;
        }

        string t = "Timur";
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t) 
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}