#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;

        int count = 0;

        if(a<=2) count = 0;

        else
        {
            if(a%2==1) count = a/2;
            else count = a/2 - 1;
        }

        cout<<count<<endl;
    }
}