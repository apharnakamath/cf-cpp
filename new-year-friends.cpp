#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int arr[3] = {x1, x2, x3};
    sort(arr, arr + 3);

    int mid = arr[1]; 
    int res = abs(arr[0] - mid) + abs(arr[1] - mid) + abs(arr[2] - mid);

    cout << res << endl;
    return 0;
}
