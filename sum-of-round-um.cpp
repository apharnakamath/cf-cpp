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

        int r = 1;
        vector <int> res;

        while(a>0)
        {
            int temp = a%10;
            if(temp!=0)
            {
                res.push_back(temp*r);
            }
            r = r*10;
            a = a/10;
        }

        cout<<res.size()<<endl;
        
        for(int i=0;i<res.size();i++)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}