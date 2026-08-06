#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "codeforces";
    
    int n;
    cin>>n;
    
    vector <int> cou;
    
    for(int i=0;i<n;i++)
    {
        string t;
        cin>>t;

        int count = 0;
    
        for(int i=0;i<t.size();i++)
        {
            if(s[i]!=t[i]) count++;
        }
    
        cou.push_back(count);
    }
    
    for(int i=0;i<cou.size();i++)
    {
        cout<<cou[i]<<endl;
    }
    
}