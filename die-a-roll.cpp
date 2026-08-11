#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int Y,W;
    cin>>Y>>W;
    
    int maxi = max(Y,W);
    int poss = 6-maxi+1;
    
    int gc = gcd(poss,6);   //cause they want in fraction - dont divide, find gcd and then you can cancel it out
    
    cout<< poss/gc<< "/" << 6/gc << endl;
}
