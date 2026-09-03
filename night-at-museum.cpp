#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    vector <int> alp;
    int count = 0;
    for(char c:s) alp.push_back(c-'a');
    
    int start = 0;
    
    for(int num : alp)
    {
        int mini = min(abs(num-start),26-abs(num-start));
        count += mini;
        start = num;
    }
    
    cout<<count<<endl;
}
