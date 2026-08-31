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
        
        string s;
        cin>>s;
        
        vector <int> freq(26,0);
        
        for(char c:s) freq[c-'a']++;
        
        for(int i=25;i>=0;i--)
        {
            if(freq[i]>0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
