#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string res = "";

    for(int i=1;i<=n;i++)
    {
        if(i%2==0 && i!=n) 
        {
            res += "I love that ";
        }

        else if(i%2==1 && i!=n) 
        {
            res += "I hate that ";
        }

        else if(i%2==0 && i==n) 
        {
            res += "I love it";
        }

        else if(i%2==1 && i==n) 
        {
            res += "I hate it";
        }

    }

    cout<<res;
}