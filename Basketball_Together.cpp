/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:26 Nov,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, D, ans = 0, p = 0;
    cin >> n >> D;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--)
    {
        p += D / a[i] + 1;
        if (p > n)
            break;
        ans++;
    }
    cout << ans;
}