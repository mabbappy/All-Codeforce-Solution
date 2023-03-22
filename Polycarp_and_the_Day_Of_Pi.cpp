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
    int T;
    cin >> T;
    while (T--)
    {
        string s1 = "314159265358979323846264338327";
        string s2;
        cin >> s2;
        int cnt = 0, a = 0;
        for (int i = 0; i < s2.size(); i++)
        {
            if (s1[i] == s2[i])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
        a;
    }
    return 0;
}