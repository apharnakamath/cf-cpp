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
        vector <vector<char>> adj(n,vector<char>(4));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<4;j++)
            {
                char a;
                cin>>a;
                
                adj[i][j] = a;
            }
        }
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<4;j++)
            {
                if(adj[i][j]=='#') cout<<j+1<<" ";
            }
        }
        
        cout<<endl;
    }
}
