#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a;
        string s;

        cin>>a>>s;

        vector <int> freq(26,0);
        int count = 0;

        for(char c:s)
        {
            if(freq[c-'A']>0) 
            {
                count++;
            }
            else if(freq[c-'A']==0) 
            {
                count += 2;
                freq[c-'A']++;
            }
        }

        cout<<count<<endl;
    }
}