#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    double d = arr[0];
    for (int i = 1; i < n; ++i)
        d = max(d, (arr[i] - arr[i - 1]) / 2.0);

    d = max(d, k - arr[n - 1] * 1.0);

    cout << fixed << setprecision(10) << d << endl;
    return 0;
}