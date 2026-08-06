#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int m = 10;
        int o = 10;
        int score = 0;

        for(int j=0;j<m;j++)
        {
            for(int k=0;k<o;k++)
            {
                char c;
                cin>>c;

                if(c=='X')
                {
                    int ring = min({j,k,9-j,9-k})+1;
                    score += ring;
                }
            }
        }

        cout<<score<<endl;
    }
}