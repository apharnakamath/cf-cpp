#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            char c;
            cin>>c;

            if(c!='W'&& c!='B' && c!='G') 
            {
                cout<<"#Color";
                exit(0);
            }
        }
    }

    cout<<"#Black&White";
}