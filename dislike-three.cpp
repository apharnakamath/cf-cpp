#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> res;
    int i = 1;

    while (res.size() < 1000) 
    {
        if (i % 3 != 0 && i % 10 != 3) 
        {
            res.push_back(i);
        }
        
        i++;
    }

    for(int i=0;i<t;i++)
    {
        int k;
        cin >> k;
        cout << res[k - 1] << endl; 
    }
}
