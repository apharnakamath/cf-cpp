#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    
    vector <int> coins = {100,20,10,5,1};
    int ans = 0;
    
    for(int coin : coins)
    {
        ans += n/coin;
        n = n%coin;
    }
    
    cout<<ans;
    
}
