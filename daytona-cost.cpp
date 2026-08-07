#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        bool found = false;
        
        //if atleast one occurance, then yes (k=1 case the freq of it will be max)
        //so its basically to find if k is present in the arr or not
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a==k) found = true;
        }
        
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
