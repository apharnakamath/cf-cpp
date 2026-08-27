#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        int ans = 2;
        int best = 0;

        for (int x = 2; x <= n; x++) 
        {
            int k = n / x;
            int sum = x * k * (k + 1) / 2;

            if (sum > best) 
            {
                best = sum;
                ans = x;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
