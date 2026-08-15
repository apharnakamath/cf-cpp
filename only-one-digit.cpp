#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;
   
   while(t--)
   {
       int x;
       cin>>x;
       int mini = 9;
       
       while(x>0)
       {
           mini = min(mini,x%10);
           x = x/10;
       }
       
       cout<<mini<<endl;
   }
}
