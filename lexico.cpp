#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S1,S2;
    cin>>S1>>S2;

    for(char &c:S1) c = tolower(c);
    for(char &c:S2) c = tolower(c);

    if(S1>S2) cout<<"1";
    else if(S1<S2) cout<<"-1";
    else cout<<"0";

}