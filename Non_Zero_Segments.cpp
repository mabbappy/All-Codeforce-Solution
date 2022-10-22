#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n, ans = 0, sum = 0;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        if (s.count(sum) || sum == 0)
        {
            ans++;
            sum = x;
            s.clear();
        }
        s.insert(sum);
    }
    cout << ans << endl;
}