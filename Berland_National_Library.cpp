/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:24 Nov,22
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
    int ans = 0;
    set<int> st;
    for (int i = 1; i <= n; ++i)
    {
        char c;
        cin >> c;
        int r;
        cin >> r;
        if (c == '-')
        {
            if (!st.count(abs(r)))
                ans++;
            else
                st.erase(r);
        }
        else
            st.insert(r);
        ans = max(ans, (int)st.size());
    }
    cout << ans << "\n";
    return 0;
}