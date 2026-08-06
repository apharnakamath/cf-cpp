#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;

    string sentence;
    cin>>sentence;

        vector <int> freq(26,0);
        for(char &c:sentence)
        {
            c = tolower(c);
            freq[c-'a']++;
        }

        int count = 0;

        for(int i=0;i<26;i++)
        {
            if(freq[i]>0) count++;
        }

        if(count==26) cout<<"YES";
        else cout<<"NO";
}