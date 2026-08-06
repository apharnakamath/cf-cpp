#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector <char> res;

    for(char c:s)
    {
        if(isdigit(c)) res.push_back(c);
    }

    sort(res.begin(),res.end());

    for(int i=0;i<res.size()-1;i++)
    {
        cout<<res[i]<<'+';
    }
    
    int d = res.size();
    
    cout<<res[d-1];
}