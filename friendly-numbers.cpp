#include <bits/stdc++.h>
using namespace std;

int sum_dig(long long int i)
{
    int sum = 0;
    while(i>0)
    {
        int temp = i%10;
        sum += temp;
        i /= 10;
    }
    return sum;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int a;
        cin>>a;

        int start = a+1;
        int end = a+81;
        int count = 0;

        for(int i=start;i<=end;i++)
        {
            if(i-sum_dig(i)==a) count++;
        }

        cout<<count<<endl;
    }
}