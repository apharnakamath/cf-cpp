#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector <int> res;

        while(n--)
        {
            int a;
            cin>>a;
            res.push_back(a);
        }

        int maxprod = 0;
        
        for(int i=0;i<res.size();i++)
        {
            res[i]++;
            int prod = 1;
            
            for(int j=0;j<res.size();j++)
            {
                prod *= res[j];
            }

            maxprod = max(maxprod,prod);
            res[i]--;
        }

        cout<<maxprod<<endl;    
    }
}