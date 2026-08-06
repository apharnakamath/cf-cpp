#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> sumv;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        int sum = 0;

        while(a>0)
        {
            int temp = a%10;
            sum += temp;
            a= a/10;
        }

        sumv.push_back(sum);
    }

    for(int i=0;i<sumv.size();i++)
    {
        cout<<sumv[i]<<endl;
    }
}