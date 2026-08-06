#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int num; 
    cin>>num;

    long long int sum = 0;

    if(num%2==0) sum = num/2;
    else sum = -(num/2)-1;

    cout<<sum;
}
