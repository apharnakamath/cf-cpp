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
        
        int count = 0;
        
        while(n>0)
        {
            if(n>=4) 
            {
                count++;
                n -= 4;
            }
            
            else 
            {
                count++;
                n -=2;
            }
        }
        
        cout<<count<<endl;
    }
}
