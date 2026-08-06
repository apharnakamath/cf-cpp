#include <bits/stdc++.h>
using namespace std;

bool isprime(int x) 
{
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) 
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() 
{
    int n, m;
    cin >> n >> m;

    vector<int> primes;

    for (int i = 2; i < 50; i++) 
    {
        if (isprime(i))
            primes.push_back(i);
    }

    for (int i = 0; i < primes.size() - 1; i++) 
    {
        if (primes[i] == n && primes[i + 1] == m) 
        {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
}
