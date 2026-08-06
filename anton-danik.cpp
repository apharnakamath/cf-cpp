#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tot;
    cin>>tot;

    vector <int> res(2,0);

    for(int i=0;i<tot;i++)
    {
        char c;
        cin>>c;
        if(c=='A') res[0]++;
        else res[1]++;
    }

    if(res[0]>res[1]) cout <<"Anton";
    else if(res[1]>res[0]) cout<<"Danik";
    else cout<<"Friendship";
}