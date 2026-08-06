#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> res;
    int count = 0;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;

        if(i==0) 
        {
            res.push_back(a);
            res.push_back(b);
        }

        else 
        {
            for(int i=0;i<res.size();i++)
            {
                if(i%2==0 && b==res[i]) count++;
                else if(i%2==1 && a==res[i]) count++;
            }

            res.push_back(a);
            res.push_back(b);
        }
    }

    cout<<count<<endl;
}