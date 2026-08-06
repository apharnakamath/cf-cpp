#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    
    vector<string> array(num);

    for(int i = 0; i < num; i++)
    {
        cin >> array[i];
    }

    int groups = 1; // at least one group exists

    for(int i = 1; i < num; i++)
    {
        if(array[i] != array[i - 1])
            groups++;
    }

    cout << groups;
    return 0;
}
