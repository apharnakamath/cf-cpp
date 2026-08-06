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

        int count = 0, maxcount = 0;
        for(int i=0;i<res.size();i++)
        {
            if(res[i]==0)
            {
                count++;
                maxcount = max(maxcount,count);
            }

            else
            {
                count = 0;
                maxcount = max(maxcount,count);
            }
        }

        cout<<maxcount<<endl;
    }
   
}