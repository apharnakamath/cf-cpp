#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    vector <bool> res(d+1,false);

    for(int i=k;i<=d;i+=k) res[i] = true;
    for(int i=l;i<=d;i+=l) res[i] = true;
    for(int i=m;i<=d;i+=m) res[i] = true;
    for(int i=n;i<=d;i+=n) res[i] = true;

    int count = 0;

    for(int i=0;i<res.size();i++)
    {
        if(res[i]) count++;
    }

    cout<<count;
}
