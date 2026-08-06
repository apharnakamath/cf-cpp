#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector <int> ca;

    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        int count = 0;

        cin>>a>>b>>c>>d;

        if(a<b) count++;
        if(a<c) count++;
        if(a<d) count++;

        ca.push_back(count);
    }


    for(int i=0;i<ca.size();i++)
    {
        cout<<ca[i]<<endl;
    }
}