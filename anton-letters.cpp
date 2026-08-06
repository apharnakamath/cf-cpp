#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> res(26,0);
    string s;
    getline(cin,s);

    for(char c:s)
    {
        if(c!='{' && c!='}' && c!=',' && c!= ' ')
        {
            int index = c-'a';
            res[index]++;
        }
    }

    int count = 0;

    for(int d:res)
    {
        if(d>0) count++;
    }

    cout<<count;
}