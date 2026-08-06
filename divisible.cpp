#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int num;
    cin>>num;

    vector <int> a;
    vector <int> b;

    for(int i=0;i<num;i++)
    {
        int ia;
        int ib;
        cin>>ia;
        cin>>ib;
        a.push_back(ia);
        b.push_back(ib);
    }

    for(int i=0;i<num;i++)
    {
        int moves = 0;
        if(a[i]%b[i]==0) cout<<0<<endl;
        else
        {
            moves += a[i]%b[i];
        }

        cout<<moves<<endl;
    }

}