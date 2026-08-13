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
        
        set <char> st;
        st.insert(s[0]);
        bool poss = false;
        
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1]) 
            {
                if(st.count(s[i]))
                {
                    poss = true;
                    break;   
                }
                
                st.insert(s[i]);
            }
        
        }
        
        if(poss) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
