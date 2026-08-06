#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <string> res;

    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        if(c!='c'&& c!='o'&& c!='d' && c!= 'e' && c!= 'f' && c!='r' && c!='c' && c!='s') res.push_back("NO");
        else res.push_back("YES");
    }

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<endl;
    }
}