/**
 *Bismillah Hir Rahmanir Rahim
 *Rahman Zahagir Vorosa!
 *author:mabbappy
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int ar[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        if (ar[0] == ar[n - 1])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << ar[0];
            for (int i = n - 1; i > 0; i--)
            {
                cout << " " << ar[i];
            }
            cout << endl;
        }
    }
}
