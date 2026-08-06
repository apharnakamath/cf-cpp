#include <bits/stdc++.h>
using namespace std;

int main()
{
    int totlel;
    cin>>totlel;

    int p,q;
    vector <int> freq(101,0);

    cin>>p;
    for(int i=0;i<p;i++)
    {
        int d;
        cin>>d;
        freq[d]++;
    }

    cin>>q;
    for(int i=0;i<q;i++)
    {
        int d;
        cin>>d;
        freq[d]++;
    }

    for(int i=1;i<=totlel;i++)
    {
        if(freq[i]==0)
        {
            cout<<"Oh, my keyboard!";
            exit(0);
        }
    }

    cout<<"I become the guy.";
}