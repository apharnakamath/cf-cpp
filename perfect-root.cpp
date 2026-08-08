#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        //every positive number is a perfect root in this cause sqaure number exists for all these
        
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
