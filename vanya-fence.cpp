#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    vector <int> res;

    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        res.push_back(a);
    }

    int count = 0;

    for(int i=0;i<res.size();i++)
    {
        if(res[i]<=n) count++;
        else if(res[i]>n) count += 2;
    }

    cout<<count;
}