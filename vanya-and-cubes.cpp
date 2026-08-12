#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int level = 1;
    int levelCubes = 1;
    int total = 1;
    
    while(true)
    {
        levelCubes += level + 1;
        
        if(levelCubes + total > n) break;
        total += levelCubes;
        level++;
    }
    
    cout<<level<<endl;
    
}
