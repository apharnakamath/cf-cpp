#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> res;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        res.push_back(a);
    }

    sort(res.begin(),res.end(),greater <int>());

    int maxi = res[0];
    int count = 0;

    for(int i=1;i<res.size();i++)
    {
        count += maxi-res[i];
    }

    cout<<count<<endl;
}