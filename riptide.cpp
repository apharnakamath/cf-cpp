#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   
   while(n--)
   {
      int a,b,c;
      cin>>a>>b>>c;
      int count = 0;
      
      while(a!=b && b!=c && c!=a)
      {
         count++;
         
         if(a>b && a>c)
         {
             if(b<c) b++;
             else c++;
             a--;
         }
         
         else if(b>a && b>c)
         {
             if(a<c) a++;
             else c++;
             b--;
         }
         
         else
         {
             if(a<b) a++;
             else b++;
             c--;
         }
      }
      
      cout<<count<<endl;
   }
}
