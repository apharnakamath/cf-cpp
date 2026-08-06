#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int a,b;
        cin>>a>>b;

        int c = 24-(a+1);
        int d = 60-b;

        int total = (c*60) + d;
        cout<<total<<endl;
    }
    
}