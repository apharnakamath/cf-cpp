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
        
        int odd = 0;
        
        for(int i=0;i<2*n;i++)
        {
            int a;
            cin>>a;
            if(a%2==1) odd++;
        }
        
        if(odd==n) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
