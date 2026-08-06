#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string a;
        cin>>a;

        int len = a.size();
        if(len%2==1) 
        {
            cout<<"NO"<<endl;
            continue;
        }

        else
        {
            string f,s;
            for(int i=0;i<len/2;i++)
            {
                f += a[i];
            }

            for(int i=len/2;i<len;i++)
            {
                s += a[i];
            }

            if(f==s) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}