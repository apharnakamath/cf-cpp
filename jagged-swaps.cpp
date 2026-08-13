#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isSorted(vector <int> &nums)
{
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]<nums[i-1]) return false;
    }
    
    return true;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector <int> arr(n);
        
        for(int i=0;i<n;i++) cin>>arr[i];
        bool changed = true;
        
        while(changed)
        {
            changed = false;
            
            for(int i=1;i<n-1;i++)
            {
                if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
                {
                    swap(arr[i],arr[i+1]);
                    changed = true;
                }
            }
        }
        
        if(isSorted(arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
