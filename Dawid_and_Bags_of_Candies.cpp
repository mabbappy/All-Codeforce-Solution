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
    int a[5];
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + 4);
    if (a[0] + a[3] == a[1] + a[2] || a[0] + a[1] + a[2] == a[3])
        cout << "YES";
    else
        cout << "NO";
}
