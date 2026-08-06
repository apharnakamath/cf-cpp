#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count = 0;
    int maxcount = 0;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;

        if(i==0)
        {
            count = a+b;
            maxcount = max(count,maxcount);
        }

        else 
        {
            count = count - a + b;
            maxcount = max(count,maxcount);
        }
    }

    cout<<maxcount<<endl;
}