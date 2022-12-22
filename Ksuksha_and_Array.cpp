/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:22 Nov,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll ar[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] % ar[0] == 0)
        {
            cnt++;
        }
    }
    if (cnt == n)
    {
        cout << ar[0] << endl;
    }
    else
        cout << "-1" << endl;
}