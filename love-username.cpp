#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> res;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        res.push_back(a);
    }

    int count = 0;
    int best = res[0];
    int worst = res[0];

    for(int i=1;i<n;i++)
    {
        if(res[i]>best) 
        {
            count++;
            best = res[i];
        }

        else if(res[i]<worst)
        {
            count++;
            worst = res[i];
        }
    }

    cout<<count<<endl;
}