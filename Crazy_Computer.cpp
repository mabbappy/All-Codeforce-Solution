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
    int n, c;
    cin >> n >> c;
    int ar[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if ((ar[i] - ar[i - 1]) <= c)
        {
            cnt++;
        }
        else
            cnt = 1;
    }
    cout << cnt << endl;
}