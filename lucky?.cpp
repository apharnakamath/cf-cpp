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
        int firstsum = 0;
        int secondsum = 0;

        for(int i=0;i<3;i++)
        {
            firstsum += s[i]-'0';
        }

        for(int i=3;i<6;i++)
        {
            secondsum += s[i]-'0';
        }

        if(firstsum==secondsum) cout<<"Yes"<<endl;
        else cout<<"NO"<<endl;
    }
}