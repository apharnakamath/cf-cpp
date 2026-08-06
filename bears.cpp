#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limak, bob;
    cin>>limak>>bob;
    int count = 0;

    while(limak<bob)
    {
        limak = 3*limak;
        bob = 2*bob;
        count++;
    }

    cout<<count;
}