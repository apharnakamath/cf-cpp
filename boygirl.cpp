#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;

    vector <int> freq(26,0);

    for(char c:s)
    {
        freq[c-'a']++;
    }

    int count = 0;

    for(int i=0;i<freq.size();i++)
    {
        if(freq[i]>0) count++;
    }

    if(count%2==0) cout<<"CHAT WITH HER!"<<endl;
    else if(count%2==1) cout<<"IGNORE HIM!"<<endl;
    return 0;
}