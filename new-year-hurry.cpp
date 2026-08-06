#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int prob,mins;
    cin>>prob>>mins;
    
    int left = 240-mins;
    int solve = 0;
    
    for(int i=0;i<prob;i++)
    {
        if(left >= 5*(i+1))
        {
            solve++;
            left -= 5*(i+1);
        }
    }
    
    cout<<solve;
    
    
}
