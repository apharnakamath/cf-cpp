#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector <int> arr(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int left = 0;
    int right = n-1;
    bool sereja = true;
    int a = 0;
    int b = 0;
    
    while(left <= right)
    {
        if(sereja)
        {
            a += max(arr[left],arr[right]);
            if(arr[left]>=arr[right]) left++;
            else right--;
            sereja = !sereja;
        }
        
        else
        {
            b += max(arr[left],arr[right]);
            if(arr[left]>=arr[right]) left++;
            else right--;
            sereja = !sereja;
        }
    }
    
    cout<<a<<" "<<b<<endl;
}
