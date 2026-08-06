#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    int k;
    cin>>n>>k;

    while(k>0)
    {
        int temp = n%10;
        if(temp==0) n = n/10;
        else if(temp!=0) n--;
        k--;
    }

    cout<<n;
}