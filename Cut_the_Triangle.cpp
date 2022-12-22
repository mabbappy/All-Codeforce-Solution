/**
 *Bismillah Hir Rahmanir Rahim!
 *Rahman ZAHAGIR Vorosa!
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
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a[3], b[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            cin >> b[i];
        }
        sort(a, a + 3);
        sort(b, b + 3);
        if (a[0] < a[1] and a[1] < a[2])
        {
            cout << "YES" << endl;
        }
        else if (b[0] < b[1] and b[1] < b[2])
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}