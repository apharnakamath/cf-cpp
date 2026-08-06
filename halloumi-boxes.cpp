#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool solve(vector<int> &a, int k)
{
    int n = a.size();
    
    //if k>=2 its always possible to sort so check only when k is 1
    
    if(k==1)
    {
        vector <int> copy = a;
        sort(copy.begin(),copy.end());
        
        for(int i=0;i<n;i++)
        {
            if(copy[i]!=a[i]) return false;
        }
    }
    
    return true;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        vector <int> arr(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        if(solve(arr,k)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
