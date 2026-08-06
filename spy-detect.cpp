#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;

        vector <int> arr;

        for(int j=0;j<a;j++)
        {
            int k;
            cin>>k;
            arr.push_back(k);
        }

        int common;

        if(arr[0]==arr[1] || arr[0]==arr[2])
        {
            common = arr[0];
        }

        else common = arr[1];

        for(int p=0;p<arr.size();p++)
        {
            if(arr[p]!=common)
            {
                cout<<p+1<<endl;
                break;
            }
        }
    }
}