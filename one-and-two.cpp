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
        
        vector <int> arr(n);
        
        //only twos matter, 1 doesnt matter
        int twos = 0;
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==2) twos++;
        }
        
        //if twos count is odd, then -1
        if(twos%2==1) 
        {
            cout<<-1<<endl;
            continue;
        }
        
        //or else, we need to half it. so madhya iro two will be the answer - evenly divided so product balanced
        int need = twos/2;
        int count = 0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==2) count++;
            
            if(count==need) 
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
