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
        
        int best = -1;
        int val = -1;
        
        for(int i=1;i<=n;i++)
        {
            int a,b;
            cin>>a>>b;
            
            if(a<=10 && b>best)
            {
                best = b;
                val = i;
            }
        }
        
        cout<<val<<endl;
    }
}
