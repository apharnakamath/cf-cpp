#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        
        //yes when 1. n is even, 2. n and k both odd
        
        if(n%2==0 || k%2==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
