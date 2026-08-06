#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector <char> ca;

    for(int i=0;i<n;i++)
    {
        int a,b,c;
        char count = ' ';

        cin>>a>>b>>c;
        
        if(a+b==c) count = '+';
        else if(a-b==c) count = '-';

        ca.push_back(count);
    }


    for(int i=0;i<ca.size();i++)
    {
        cout<<ca[i]<<endl;
    }
}


