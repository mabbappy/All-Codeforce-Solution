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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            cnt0++;
        }
        else if (s[i] == '1')
        {
            cnt1++;
        }
    }
    cout << n - 2 * min(cnt0, cnt1) << endl;
}