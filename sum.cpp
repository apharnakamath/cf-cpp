#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> ai(n), bi(n), ci(n);

    for (int i = 0; i < n; i++)
        cin >> ai[i] >> bi[i] >> ci[i];

    for (int i = 0; i < n; i++)
    {
        if (ai[i] + bi[i] == ci[i] ||
            ai[i] + ci[i] == bi[i] ||
            bi[i] + ci[i] == ai[i])
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
}
