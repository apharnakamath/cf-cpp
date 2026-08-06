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

    int d = res.size();
    vector <int> answer(d,0);

    for(int i=0;i<res.size();i++)
    {
        int index = res[i]-1;
        answer[index] = i+1;
    }

    for(int i=0;i<d;i++)
    {
        cout<<answer[i]<<" ";
    }
}