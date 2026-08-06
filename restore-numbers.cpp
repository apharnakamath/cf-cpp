#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int x,y,z,t;
    cin>>x>>y>>z>>t;
    vector <int> res;

    res.push_back(x);
    res.push_back(y);
    res.push_back(z);
    res.push_back(t);

    auto max_it = max_element(res.begin(),res.end());
    int maxi = *max_it;

    int a,b,c;
    
    if(maxi==t)
    {
        c = maxi - x;
        a = maxi - y;
        b = maxi - z;
    }

    else if(maxi==x)
    {
        c = maxi - t;
        a = maxi - y;
        b = maxi - z;
    }
    
    else if(maxi==y)
    {
        c = maxi - x;
        a = maxi - t;
        b = maxi - z;
    }
    
    else
    {
        c = maxi - x;
        a = maxi - y;
        b = maxi - t;
    }
        
    cout<<a<<" "<<b<<" "<<c;

}