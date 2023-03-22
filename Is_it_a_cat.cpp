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
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.resize(unique(s.begin(), s.end()) - s.begin());
        if (s == "meow")
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}