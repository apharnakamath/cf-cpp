#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int count1 = 0;
    int count2 = 0;

    if(a>b)
    {
        count1 = b;
        if((a-b)!=1) count2 = (a-b)/2;
        else count2 = 0;
    }

    else
    {
        count1 = a;
        if((b-a)!=1) count2 = (b-a)/2;
        else count2 = 0;
    }
    
    cout<<count1<<" "<<count2;
}