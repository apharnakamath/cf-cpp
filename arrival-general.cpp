#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num;
    cin>>num;

    int array[num];

    for(int i=0;i<num;i++)
    {
        cin>>array[i];
    }

    int comp = 0;

    for(int i=0;i<num-1;i++)
    {
        for(int j=1;j<num;j++)
        {
            if(array[j]>array[i]) 
            {
                swap(&array[j],&array[i]);
                comp++;
            }
        }
    }
    cout<<comp;
}