#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t,u;
    cin>>s>>t>>u;

    vector <int> freq(26,0);

    for(char c:s)
    {
        freq[c-'A']++;
    }

    for(char c:t)
    {
        freq[c-'A']++;
    }

    for(char c:u)
    {
        freq[c-'A']--;
    }

    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0) 
        {
            cout<<"NO";
            exit(0);
        }
    }

    cout<<"YES";
}