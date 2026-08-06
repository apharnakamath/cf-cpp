#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vector <int> res;

        while(a>0)
        {
            int temp = a%10;
            res.push_back(temp);
            a = a/10;
        }

        bool same = true;

        for(int i=0;i<res.size()-1;i++)
        {
            if(res[i]!=res[i+1]) 
            {
                same = false;
                break;
            }
        }

        if(same) 
        {
            int d = res[0];
            int p = res.size();
            int count = (d-1)*10 + (p+1)*p/2;
            cout<<count<<endl;
        }

        else cout<<0<<endl;
    }
}