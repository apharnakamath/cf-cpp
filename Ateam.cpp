#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;

    int matrix[num][3];

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<3;j++)
        {
            int inp;
            cin>>inp;
            matrix[i][j] = inp;
        }
    }

    int final = 0;

    for(int i=0;i<num;i++)
    {
        int count = 0;
        for(int j=0;j<3;j++)
        {
            if(matrix[i][j]==1) count++;
        }
        if(count>=2) final++;
    }

    cout<<final;
}