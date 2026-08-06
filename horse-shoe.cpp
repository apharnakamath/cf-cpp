#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> res;

    for(int i=0;i<4;i++)
    {
        int n;
        cin>>n;
        res.push_back(n);
    }

    sort(res.begin(),res.end());
    int count = 0;

    for(int i=0;i<3;i++)
    {
        if(res[i]==res[i+1]) count++;
    }

    cout<<count;
}