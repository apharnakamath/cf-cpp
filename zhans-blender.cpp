#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        
        /* gives TLE BUT this is the core logic
        int c = 0;
        int secs = 0;
        
        while(n>0)
        {
            int added = min(n,y);
            c += added;
            
            int blended = min(x,c);
            n -= blended;
            c -= blended;
            
            secs++;
        }
        
        cout<<secs<<endl;
        */
        
        int speed = min(x,y);
        
        cout<<(n+speed-1)/speed<<endl;
    }
}
