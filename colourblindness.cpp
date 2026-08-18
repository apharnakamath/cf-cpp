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
        
        string a,b;
        cin>>a>>b;
        bool same = true;
        
        for(int i=0;i<n;i++)
        {
            if((a[i]=='R' && b[i]!='R') || (a[i]!='R' && b[i]=='R')) 
            {
                same = false;
                break;
            }
        }
        
        if(same) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
