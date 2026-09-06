#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
	cin>>t;
	while(t--)
	{
		int temp,n,odd=0,even=0;
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			if(temp%2) odd++;
			else even++;
		}
		
		if(even==n || (odd==n && n%2==0)) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}
