#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector <long long> arr(n);
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>arr[i];
        }
        
        cout<<gcd(arr[0],arr[n-1])<<endl;
    }
}
