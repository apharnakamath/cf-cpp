#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        int left = 0;
        int right = n-1;
        
        //basic two pointers 
        
        while(left<right && s[left]!=s[right])
        {
            left++;
            right--;
        }
        
        cout<<max(0, right-left+1)<<endl;
        
    }
}
