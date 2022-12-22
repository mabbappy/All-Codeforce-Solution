/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:23 Nov,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int ar[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == ar[0])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}