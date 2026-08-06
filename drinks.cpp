#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    double count = 0;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        count += a;
    }

    float answer = count/n;
    cout << fixed << setprecision(6) << answer << endl;

}