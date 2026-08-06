#include <bits/stdc++.h>
using namespace std;

bool isbful(int n)
{
    set <int> seen;

    while(n>0)
    {
        int temp = n%10;
        seen.insert(temp);
        n = n/10;
    }

    if(seen.size()==4) return true;
    else return false;
}

int main()
{
    int year;
    cin>>year;

    int start = year+1;

    while(!isbful(start))
    {
        start++;
    } 

    cout << start;
}