#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int ar[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        if (ar[0] + ar[1] > ar[n - 1])
        {
            cout << "-1" << endl;
        }
        else
            cout << " 1 2 " << n << endl;
    }
    return 0;
}
