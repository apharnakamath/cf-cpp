#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector <int> res;

        while(n--)
        {
            int a;
            cin>>a;
            res.push_back(a);
        }

        sort(res.begin(),res.end());
        int count = 0;

        for(int i=0;i<res.size();i++)
        {
            if(abs(res[i+1]-res[i])>1) count++;
        }

        if(count>1) cout<<"NO";
        else cout<<"YES";
    }
}