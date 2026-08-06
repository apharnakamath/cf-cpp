#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    
    for(int i=0;i<5;i++)
    {
        int a,b,c,d,e;

        cin>>a>>b>>c>>d>>e;

        vector <int> res;
        res.push_back(a);
        res.push_back(b);
        res.push_back(c);
        res.push_back(d);
        res.push_back(e);

        for(int j=0;j<res.size();j++)
        {
            if(res[j]==1)
            {
                count = abs(i-2) + abs(j-2);
            }
        }
    }

    cout<<count;
}