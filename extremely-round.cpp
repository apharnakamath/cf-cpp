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
        int digits = 0;
        int first_dig = 0;
        int count = 0;
        
        while(n>0)
        {
            first_dig = n%10;
            n = n/10;
            digits++;
        }
        
        count = (digits-1)*9 + first_dig;
        cout<<count<<endl;
    }
}
