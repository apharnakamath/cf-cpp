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
        int evensum=0,oddsum=0;
        
        while(n--)
        {
            int a;
            cin>>a;
            
            if(a%2==0) evensum += a;
            
            else oddsum += a;
        }
        
        if(evensum>oddsum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
