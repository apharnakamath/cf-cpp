#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        int max1 = max(a,b);
        int max2 = max(c,d);

        vector<int> v = {a,b,c,d};
        sort(v.begin(), v.end());

        if((v[2] == max1 || v[2] == max2) &&
           (v[3] == max1 || v[3] == max2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
