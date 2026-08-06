#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,w;
    cin>>k>>n>>w;

    int sum = 0;
    int i = 1;

    while(w>0)
    {
        sum += i*k;
        i++;
        w--;
    }

    if(sum<=n) cout<<0<<endl;
    else
    {
        int need = abs(n-sum);
        cout<<need<<endl;
    }
    
}