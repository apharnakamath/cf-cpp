#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector <char> res;

    for(char c:s)
    {
        if(c!='a'&& c!='e' && c!='i' && c!='o' && c!='u' && c!='A'&& c!='E' && c!='I' && c!='O' && c!='U' && c!='y'&&c!='Y') res.push_back(tolower(c));
    }

    for(int i=0;i<res.size();i++)
    {
        cout<<'.'<<res[i];
    }
}