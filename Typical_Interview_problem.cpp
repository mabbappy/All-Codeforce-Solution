#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Bismilla Hir Rahmanir Rahim
    // Assalatu Assalamualika Ya Rasool-Allah!
    // Rahman Zahagir Vorosa!
    // mabbappy
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s = "FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
        string s1;
        cin >> s1;
        int flag = 0;
        if (s.find(s1) != s.npos)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}