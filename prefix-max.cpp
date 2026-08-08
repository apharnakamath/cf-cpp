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
        
        vector <int> arr(n);
        int maxi = 0;
        
        //we can swap any two elements once, so swap the max ele to first pos. then its just max element * arr size.
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            maxi = max(maxi,arr[i]);
        }
        
        cout << maxi*n<<endl;
    }

    return 0;
}
