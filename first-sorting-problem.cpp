#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int maxim,minim;

        if(a<b) 
        {
            minim = a;
            maxim = b;
        }

        else 
        {
            minim = b;
            maxim = a;
        }

        cout<<minim<<" "<<maxim<<endl;
    }
}