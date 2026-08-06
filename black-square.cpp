#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    string s;
    cin>>s;

    int count = 0;

    for(char p:s)
    {
        if(p=='1') count+=a;
        else if(p=='2') count+=b;
        else if(p=='3') count+=c;
        else if(p=='4') count+=d;
    }

    cout<<count<<endl;
}