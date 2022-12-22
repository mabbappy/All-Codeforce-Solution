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
    vector<int> v;
    while (tt--)
    {
        int k, n;
        cin >> k >> n;
        int s = n - k;
        int a = 0;
        for (int i = 1; i <= k; i++)
        {
            cout << a + i << " ";
            a = min(a + i - 1, s);
        }
        cout << endl;
    }
    return 0;
}