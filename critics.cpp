#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector <string> answer;

    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        vector <int> res;
        res.push_back(a);
        res.push_back(b);
        res.push_back(c);

        sort(res.begin(),res.end(),greater <int>());

        if(res[0]+res[1]>=10) answer.push_back("YES");
        else answer.push_back("NO");
    }

    for(int i=0;i<n;i++)
    {
        cout<<answer[i]<<endl;
    }
}